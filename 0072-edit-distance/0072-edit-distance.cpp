class Solution {
public:
int f(int i,int j,string &word1,string word2,vector<vector<int>>&dp){
    if(i<0)return j+1;
    if(j<0)return i+1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(word1[i]==word2[j]){
        return dp[i][j]=f(i-1,j-1,word1,word2,dp);
    }
    int insert=f(i,j-1,word1,word2,dp);
    int del=f(i-1,j,word1,word2,dp);
    int replace=f(i-1,j-1,word1,word2,dp);
    return dp[i][j]=1+min({insert,del,replace});
}
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
       return f(word1.size()-1,word2.size()-1,word1,word2,dp);
    }
};