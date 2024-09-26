// Two Sum LeetCode 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        int s= nums.size();
        for(int i=0;i<s;++i){
            int remain= target-nums[i];
            if(map.find(remain)!= map.end()){
                return {map[remain], i};
            }
            map[nums[i]]= i;
        }
        return {-1,-1};
    }
};