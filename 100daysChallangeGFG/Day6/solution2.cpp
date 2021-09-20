vector<int> factorial(int N){
        vector<int> result;
        vector<int> inner_result;
        result.push_back(1);
        int v_size;
        for(int inc=2;inc<=N;inc++){
            v_size = result.size();
            int carry=0;
            int len_carry=0;
            string carry_sub;
            for(int eachValue=0;eachValue<v_size;eachValue++){
                int mul = (result.at(eachValue)*inc)+carry; //5 in 605
                string res = to_string(mul);
                char const *res_char = res.c_str();
                int str_size = res.size();

                if(str_size == 1){
                    int value = atoi(res_char);
                    inner_result.push_back(value);
                    carry=0;
                    len_carry=0;
                }
                else{
                    res_char[str_size-1];
                    int value = (int)res_char[str_size-1] - 48;
                    inner_result.push_back(value);
                    res.erase(res.begin() + res.size() - 1);
                    carry_sub = res;
                    char const *res_carry_char = res.c_str();
                    carry = atoi(res_carry_char);
                    len_carry = carry_sub.size();
                }
            }
            
            for(;len_carry>0;len_carry--){
                int in_value = (int)carry_sub[len_carry-1] - 48;
                inner_result.push_back(in_value);
            }
            
            result = inner_result;
            inner_result.clear();

        }
        reverse(result.begin(), result.end());
        return result;
    }
