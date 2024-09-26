// Two Sum LeetCode 1

const twoSum = function (nums, target) {
  let obj = {};
  let s = nums.length;
  for (let i = 0; i < s; ++i) {
    let remain = target - nums[i];
    if (remain in obj) {
      return [obj[remain], i];
    }
    obj[nums[i]] = i;
  }
};
