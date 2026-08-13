class Solution {
public:
void f(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&ans){
    if(index==nums.size()){
        ans.push_back(current);
        return ;
    }
    current.push_back(nums[index]);
    f(index+1,nums,current,ans);
    current.pop_back();
    f(index+1,nums,current,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        vector<int>current;
        f(i,nums,current,ans);
        return ans;
    }
};