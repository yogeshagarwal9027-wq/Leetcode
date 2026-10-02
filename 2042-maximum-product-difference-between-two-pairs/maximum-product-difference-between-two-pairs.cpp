class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mx=INT_MIN,smx=INT_MIN,mn=INT_MAX,smn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                smx=mx;
                mx=nums[i];
            }else if(nums[i]>smx){
                smx=nums[i];
            }
            if(nums[i]<mn){
                smn=mn;
                mn=nums[i];
            }else if(nums[i]<smn){
                smn=nums[i];
            }
        }
        return (mx*smx)-(mn*smn);
    }
};