class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=nums.size()/2;
        for(auto it:mp){
            if(it.second>ans){
                return it.first;
            }
        }
        return 0;
    }
};