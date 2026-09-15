class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc=0,currentc=0;
        for (int num:nums){
            if(num==1){
                currentc++;
                maxc=max(maxc,currentc);
            }else{
                currentc=0;
            }
        }
        return maxc;
        }
};