class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1=INT_MIN,cand2=INT_MIN,count1=0,count2=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==cand1){
                count1++;
            }else if(nums[i]==cand2){
                count2++;
            }else if(count1==0){
                count1++;
                cand1=nums[i];
            }else if(count2==0){
                count2++;
                cand2=nums[i];
            }else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==cand1){
                count1++;
            }
            if(nums[i]==cand2){
                count2++;
            }
        }
        if(count1>nums.size()/3){
            ans.push_back(cand1);
        }
        if(count2>nums.size()/3){
            ans.push_back(cand2);
        }
        return ans;
    }
};