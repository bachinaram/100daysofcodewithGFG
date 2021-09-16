#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* from main function
passing a[5]=0,1,2,2,1,0,0;
n=7;
*/

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        
        int temp=0;
        for(int j=0;j<c0;j++){
            a[temp]=0;
            temp++;
        }
        for(int j=0;j<c1;j++){
            a[temp]=1;
            temp++;
        }
        for(int j=0;j<c2;j++){
            a[temp]=2;
            temp++;
        }
        //sort(a,a+n);
        /*int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }*/
    }
    
};

int main(){
        int a[7]={0,1,2,2,1,0,0};
        a=7;
        Soution ob;
        ob.sort012(a,n);
        
        for(int i=0;i<n;i++){
                cout << a[i]<<" ";
        }
        cout << endl;
}
