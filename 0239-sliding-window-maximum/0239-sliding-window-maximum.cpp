class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>>mt;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mt.insert(nums[i]);
            if(mt.size()==k){
                ans.push_back(*mt.begin());
                auto res=mt.find(nums[i-k+1]);
                mt.erase(res);

            }
        }
        return ans;
        
    }
};