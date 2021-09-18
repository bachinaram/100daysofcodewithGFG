#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        int num1,num2,output,j=0;
        vector<int> qs;
        for(int i=0;i<q;i++){
            output=0;
            num1=queries[j];
            j++;
            num2=queries[j];
            j++;
            
            for(int k=num1-1;k<num2;k++){
                output=output+arr[k];
            }
            qs.push_back(output);
        }
    return qs;
    }
};
int main(){
        int t;
        cin >> t;
        while(t--){
                int n,q;
                cin >> n;
                int arr[n]
                for(int i=0;i<n;i++){
                        cin >> arr[i];
                }
		cin >> q;
		int queries[2*q];
                for(int i=0;i<2*q;i+=2){
                        cin >> queries[i]>>queries[i+1];
                }
                Solution ob;
		vector<int> ans = ob.querySum(n,arr,q,queries);
		for(int u:ans){
			cout<<u<<" ";
		}
                cout<<endl;
	}
        return 0;
}
