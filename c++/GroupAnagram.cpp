// Group anagrams LeetCode 49

class Solution {
public:
    string generateWord(string &word){
        int arr[26]= {0};
        int ln = word.size();
        string res;
        for(int i=0; i<ln; ++i){
            char ch = word[i];
            arr[ch-'a']++;
        }

        for(int i=0; i<26; ++i){
            int freq = arr[i];
            if(freq>0){
                res+= string(freq, i+'a');
            }
        }
        return res;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs.size();
        unordered_map<string,vector<string>> map;
        vector<vector<string>> result;

        for(int i=0;i<n;++i){
            string word= strs[i];
            string new_word = generateWord(word);
            map[new_word].push_back(word);
        }

        for(auto &i:map){
            result.push_back(i.second);
        }

        return result;
    }
};