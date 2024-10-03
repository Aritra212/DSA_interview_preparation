// Leet code 1832. Check if the Sentence Is Pangram


class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr (26,0);
        int count=0;

        for(auto &it:sentence){
            int idx= it-'a';
            if(arr[idx]==0){
                count++;
            }
            arr[idx]++;
        }

        if(count == 26){
            return true;
        }
        return false;
    }
};