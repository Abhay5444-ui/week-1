class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
      int  runningSum=0;
      for(int i=0;i<nums.size();i++)
      {
        runningSum+=nums[i];
        ans[i]=runningSum;

      }
      return ans;
    }
};