class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int ans=0;
        int count0=0;

        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                count0++;
            }
           while(count0>k){
            if(nums[low]==0){
                count0--;
            }
            low++;
           }
            ans=max(ans,right-low+1);
        }
        return ans;
    }
};