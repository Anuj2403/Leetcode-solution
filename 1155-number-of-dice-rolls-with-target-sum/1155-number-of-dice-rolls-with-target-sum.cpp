class Solution {
public:
    int mod = 1e9+7;
    int dp[31][1001];
    Solution() {
        memset(dp, -1, sizeof(dp));
    }
    int numRollsToTarget(int n, int &k, int target) {
        if(target < 0)
            return 0;
        if(n == 0)
            return target == 0 ? 1 : 0;
        if(dp[n][target] != -1)
            return dp[n][target];
        int ans = 0;
        for(int i=1; i<=k; i++) {
            ans = (ans + numRollsToTarget(n-1, k, target-i)) % mod;
        }
        return dp[n][target] = ans % mod;
    }
};