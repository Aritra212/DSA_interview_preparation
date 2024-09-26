// Three Sum LeetCode - 15

class Solution {
public:
    vector<vector<int>> result;
    void twoSum (vector<int> &nums, int target, int i, int j){
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum>target){
                j--;
            }else if(sum <target){
                i++;
            }else{
                //remove duplicates
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]== nums[j-1]) j--;

                result.push_back({-target, nums[i], nums[j]});

                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return {};
        }
        result.clear();
        // sort the array
        sort(begin(nums),end(nums));

        //fixing n1
        for(int i=0;i<n-2;++i){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            //set target (-n1)
            int target = -nums[i];

            // apply to sum to the rest
            twoSum(nums, target, i+1,n-1);

        }
        
        return result;
    }
};