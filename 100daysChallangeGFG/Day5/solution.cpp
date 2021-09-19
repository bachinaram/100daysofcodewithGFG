class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<double> array3;
        double ar1_len = array1.size();
        int ar2_len = array2.size();
        int ar3_len = ar1_len + ar2_len;
        double result=0;
        int i_count=0,j_count=0;
        int i=0,j=0; 
        int half_array3;
        for(i;i<ar1_len;i++){
            for(j;j<ar2_len;){
                if(array1.at(i)<=array2.at(j)){    // 1<2
                    array3.push_back(array1.at(i));
                    i_count=i+1;
                    break;
                }
                else{
                    array3.push_back(array2.at(j));
                    j_count=j+1;
                    j++;
                }
            }
        }

        
        while(i_count<ar1_len){
            array3.push_back(array1.at(i_count));
            i_count++;
        }
        
        while(j_count<ar2_len){
            array3.push_back(array2.at(j_count));
            j_count++;
        }
        
        if(ar3_len%2 != 0){
           result =  array3[ar3_len/2];
        }
        else{
            result = (array3[(ar3_len-1)/2]+array3[ar3_len/2])/2.0;    
        }
        return result;
    }
};
