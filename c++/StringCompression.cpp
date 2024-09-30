// String compression Leet Code 443

class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();

        int idx = 0;
        int i=0;
        while(i<n){
            int cur_char = chars[i];
            int count= 0;

            while(i<n && chars[i] == cur_char){
                count++;
                i++;
            }

            chars[idx] = cur_char;
            idx++;

            if(count > 1){
                string count_str = to_string(count);

                for(char &it: count_str){
                    chars[idx]= it;
                    idx++;
                }
            }
        }
        return idx;
    }
};