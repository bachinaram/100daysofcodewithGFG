class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        int output=0,temp = 0;
        int mymin = 0;
        for(int i=0;i<n;i++){
            int between = 0;
            for(int j=i+1;j<n;j++){
                if(j-i > 1){
                    between = between +1;
                    mymin = min(height[i],height[j]);
                    temp=mymin*between;
                    output = max(output,temp);
                    //cout << output <<endl;
                    //cout<<height[i] <<" "<<height[j] <<" "<< between<<endl;
                }
            }
        }
        return output;
    }   
};
