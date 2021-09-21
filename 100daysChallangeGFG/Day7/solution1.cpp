class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        int output=0;
        int first=0,last=n-1;
        while(first<last){
            output = max(output,min(height[first],height[last])*(last-first-1));
            if(height[first]<height[last]){
                first = first+1;
            }
            else{
                last=last-1;
            }
        }
        return output;
    }   
};
