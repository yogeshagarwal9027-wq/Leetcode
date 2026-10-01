class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int sol=target-nums[i];
            if(mp.find(sol)!=mp.end()){
                return {mp[sol],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};