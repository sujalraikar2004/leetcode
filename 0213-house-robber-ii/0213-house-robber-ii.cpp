class Solution {
public:

    int f(int i, int end, vector<int>& nums, vector<int>& dp) {

        if(i > end)
            return 0;

        if(dp[i] != -1)
            return dp[i];

        int notPick = f(i + 1, end, nums, dp);

        int pick = nums[i] + f(i + 2, end, nums, dp);

        return dp[i] = max(pick, notPick);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1)
            return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        // Case 1: Don't rob last house
        int case1 = f(0, n - 2, nums, dp1);

        // Case 2: Don't rob first house
        int case2 = f(1, n - 1, nums, dp2);

        return max(case1, case2);
    }
};