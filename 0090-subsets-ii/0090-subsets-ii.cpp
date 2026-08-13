class Solution {
public:
void f(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(current);
        return;
    }
    current.push_back(nums[index]);
    f(index+1,nums,current,ans);
    current.pop_back();
    int next=index+1;
    while(next<nums.size() && nums[next]==nums[index]){
        next++;
    }
    f(next,nums,current,ans);

    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>current;
        sort(nums.begin(),nums.end());
        f(0,nums,current,ans);
        
        return ans;

    }
};