class Solution {
public:
int f(int i,int target,vector<int>&nums,vector<vector<int>>&dp,int sum){
    if(target<-sum || target>sum)return 0;
    if(i==0){
        if(target==0 && nums[0]==0)return 2;
        if(nums[0]==-target || nums[0]==target)return 1;
        
        return 0;
    }
    if(dp[i][target+sum]!=-1)return dp[i][target+sum];
    int plus=f(i-1,target+nums[i],nums,dp,sum);
    int minus=f(i-1,target-nums[i],nums,dp,sum);
    return dp[i][target+sum]=plus+minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(abs(target)>sum)return 0;
        vector<vector<int>>dp(nums.size(),vector<int>(2*sum+1,-1));
        return f(nums.size()-1,target,nums,dp,sum);
    }
};