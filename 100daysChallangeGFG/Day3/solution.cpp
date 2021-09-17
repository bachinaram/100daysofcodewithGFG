#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int count=0;
        int arr3[n+m];
        int eachInArray1=0,eachInArray2=0;
        int FirstElemStartFrom=0;
        for(eachInArray1;eachInArray1<n;eachInArray1++){
            
            for(eachInArray2;eachInArray2<m;){
                FirstElemStartFrom=eachInArray1;
                if(arr1[eachInArray1]<=arr2[eachInArray2]){
                    arr3[count]=arr1[eachInArray1];
                    count++;
                    break;
                }
                else{
                    arr3[count]=arr2[eachInArray2];
                    eachInArray2++;
                    count++;
                }
            }
        }
        
        while(eachInArray2<m){
            arr3[count]=arr2[eachInArray2];
            count++;
            eachInArray2++;
        }
        
        while(FirstElemStartFrom<n){
            arr3[count]=arr1[FirstElemStartFrom];
            count++;
            FirstElemStartFrom++;
        }
        return arr3[k-1];
    }
};

int main(){
        int t;
        cin >> t;
        while(t--){
                int n,m,k;
                cin >> n>>m>>k;
                int arr1[n],arr2[n];
                for(int i=0;i<n;i++){
                        cin >> arr1[i];
                }
                for(int i=0;i<n;i++){
                        cin >> arr2[i];
                }
                Solution ob;
		cout<<ob.kthElement(arr1,arr2,n,m,k)<<endl;
        }
        return 0;
}
