class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& E) {
        sort(E.begin(), E.end(), [](vector<int>& a, vector<int>& b) 
             -> bool {return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0];});
        vector<int> dp;
        for (auto& env : E) {
            int height = env[1];
            int left = lower_bound(dp.begin(), dp.end(), height) - dp.begin();
            if (left == dp.size()) dp.push_back(height);
            dp[left] = height;
        }
        return dp.size();
    }
};
// variatiopn of Longest Increasing Subsequence (LIS) && building bridge problem
// link ->https://www.youtube.com/watch?v=3fF1r5nhQX4

/*

// TLE -
        int n=e.size();
        if(n==0)
            return 0;
        
        sort(e.begin(),e.end());
        vector<int>dp(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(e[j][0]<e[i][0] && e[j][1]<e[i][1])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        return *max_element(dp.begin(),dp.end());
// TLE -

        int n=e.size();
        if(n==0)
            return 0;
        sort(e.begin(),e.end());
        vector<int>dp(n+1,1);
        int count=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(e[i][0]>e[j][0] && e[i][1]>e[j][1] && 1+dp[j]>dp[i])
                    dp[i]=1+dp[j];
                
                if(count<dp[i])
                    count=dp[i];
            }
        }
        return count;



*/
/*

// Wrong Approach -

        int count=1;
        int n=e.size();
        int m=e[0].size();
        sort(e.begin(),e.end());
        auto maxi=e[n-1][m-1];
        
        for(int i=0;i<n;i++)
        {
            if(e[i][0]<e[n-1][0] && e[i][1]<e[n-1][1])
            {
                count++;
            }
        }
        return count;

*/