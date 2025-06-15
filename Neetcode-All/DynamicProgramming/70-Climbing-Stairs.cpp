class Solution {
public:
int dp [46] {0};
    int climbStairs(int n) {
        if (n == 1 || n == 2) {
            dp [n] = n;
            return n;
        }
        if (dp[n] != 0)
        {
            return dp[n];
        }

        return dp [n] = climbStairs(n -1) + climbStairs(n -2);
    }
};
