class Solution {
public:
void f(int i,int target,vector<int>&current,vector<vector<int>>&ans,vector<int>&candidates){
   if(target==0){
    ans.push_back(current);
    return;
   }
   if(i<0 || target<0)return;
    current.push_back(candidates[i]);
    f(i,target-candidates[i],current,ans,candidates);
    current.pop_back();
    f(i-1,target,current,ans,candidates);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>ans;
        int n=candidates.size();
        f(n-1,target,current,ans,candidates);
        return ans;
    }
};