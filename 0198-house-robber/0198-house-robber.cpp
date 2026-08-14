class Solution {
public:
int f(int i,vector<int>&nums,vector<int>&dp){
    if(i==0){
        return nums[i];
    }

    if(i == 1)
        return max(nums[0], nums[1]);
    if(dp[i]!=-1)return dp[i];
    int notpick=0+f(i-1,nums,dp);
    int pick=0;
    if(i>=2){
        pick=nums[i]+f(i-2,nums,dp);
    }
    return dp[i]=max(pick,notpick);
}
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size()+1,-1);
        return f(nums.size()-1,nums,dp);
    }
};