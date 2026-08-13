class Solution {
public:
    int jump(vector<int>& nums) {
        int farther=0;
        int current=0;
        int jumps=0;
        for(int i=0;i<nums.size()-1;i++){
            farther=max(farther,i+nums[i]);
            if(i==current){
                jumps++;
                current=farther;
            }
        }
        return jumps;
    }
};