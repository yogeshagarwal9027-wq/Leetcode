class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            int sum=nums[i]+nums[i-1];
            nums[i]=sum;
        }
        return nums;
    }
};