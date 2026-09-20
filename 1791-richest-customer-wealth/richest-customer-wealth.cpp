class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int x=0;
        for(auto &i : accounts){
            int sum=0;
            for(auto &j : i){
                sum+=j;
            }
            x=max(sum,x);
        }
        return x;
    }
};