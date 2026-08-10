class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>an;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=nums.size()/3;
        for(auto it:mp){
            if(it.second>ans){
               an.push_back(it.first);
            }
        }
        return an;
    }
};