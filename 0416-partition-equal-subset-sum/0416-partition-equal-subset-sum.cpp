class Solution {
public:
bool f(int i,int target,vector<int>&nums,vector<vector<int>>&dp){
    if(target==0)return true;
    if(i==0){
        return (nums[0]==target);
    }
    if(dp[i][target]!=-1)return dp[i][target];
    bool notpick=f(i-1,target,nums,dp);
    bool pick=false;
    if(target>=nums[i]){
        pick=f(i-1,target-nums[i],nums,dp);
    }
    return dp[i][target]=(pick||notpick);
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum%2==1)return false;
        vector<vector<int>>dp(nums.size(),vector<int>((sum/2)+1,-1));
        return f(nums.size()-1,sum/2,nums,dp);
    }
};