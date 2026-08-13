class Solution {
public:
void f(int index,int target,vector<int>&current,vector<int>&candidates,vector<vector<int>>&ans){
    if(target==0){
        ans.push_back(current);
        return;
    }
    if(index==candidates.size() || target<0){
        return ;
        }
        current.push_back(candidates[index]);
        f(index+1,target-candidates[index],current,candidates,ans);
      current.pop_back();
        int next=index+1;
        while(next<candidates.size() && candidates[next]==candidates[index]){
            next++;
        }
       
        f(next,target,current,candidates,ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        f(0,target,current,candidates,ans);
        
        return ans;
    }
};