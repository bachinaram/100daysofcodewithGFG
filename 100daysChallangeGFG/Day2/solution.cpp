#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool myPairComparion(pair<int,int> &a,pair<int,int> &b){
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> myVector;
        for(int i=0;i<n;i++){
            myVector.push_back({start[i],end[i]});
        }
        
        sort(myVector.begin(),myVector.end(),myPairComparion);
        
        int temp=0;
        int ct=0;
        if(myVector[0].first < myVector[0].second){
            ct++;
            temp=myVector[0].second;
        }
        for(int i=1;i<n;i++){
            if(myVector[i].first > temp){
                ct++;
                temp=myVector[i].second;
            }
        }
        return ct;
    }
};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int start[n],end[n];
		for(int i=0;i<n;i++){
			cin >> start[i];
		}
		for(int i=0;i<n;i++){
			cin >> end[i];
		}	
		Solution ob;
		int ans = ob.maxMeetings(start,end,n);
		cout << ans << endl;
	}
	return 0;
}
        
        
        
        
        
        
        
        
        
