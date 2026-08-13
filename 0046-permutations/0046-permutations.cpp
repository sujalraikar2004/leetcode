class Solution {
public:
void solve(vector<int>&current,vector<int>&used,vector<int>&nums,vector<vector<int>>&ans){
    if(current.size()==nums.size()){
        ans.push_back(current);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i])continue;
        used[i]=1;
        current.push_back(nums[i]);
        solve(current,used,nums,ans);
        current.pop_back();
        used[i]=0;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>current;
        vector<vector<int>>ans;
        vector<int>used(nums.size(),0);
        solve(current,used,nums,ans);
        return ans;
    }
};