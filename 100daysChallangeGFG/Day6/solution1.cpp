class Solution {
public:
     vector<int> factorial(int N)
    {
        vector<int> result;
        result.push_back(1);
        for(int i=2; i<=N; i++)
        {
            int carry = 0;
            for(int j=0; j<result.size(); j++)
            {
                int mul = (result[j] * i) + carry;
                result[j] = mul % 10;
                carry = mul / 10;
            }
            while(carry)
            {
                result.push_back(carry % 10);
                carry = carry / 10;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
