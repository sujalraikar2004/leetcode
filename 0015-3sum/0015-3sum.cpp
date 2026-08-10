class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                if(nums[i]+nums[low]+nums[high]==0){
                    ans.push_back({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
                else if(nums[i]+nums[low]+nums[high]>0){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        if(ans.empty())return {};
        set<vector<int>>st;
        for(auto it:ans){
            st.insert(it);
        }
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};