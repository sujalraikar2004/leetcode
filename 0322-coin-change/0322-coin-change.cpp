class Solution {
public:
int f(int i,int amount,vector<int>&coins,vector<vector<int>>&dp){
    if(i==0){
        if(amount%coins[0]==0)return amount/coins[0];
        return 1e9;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    int nottake=0+f(i-1,amount,coins,dp);
    int take=1e9;
    if(amount>=coins[i]){
        take=1+f(i,amount-coins[i],coins,dp);
    }
    return dp[i][amount]= min(take,nottake);
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int ans= f(coins.size()-1,amount,coins,dp);
        if(ans==1e9)return -1;
        return ans;
    }
};