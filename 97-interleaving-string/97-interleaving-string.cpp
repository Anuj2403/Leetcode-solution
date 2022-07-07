class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length(),n=s2.length(),n1=s3.length();
        bool dp[m+1][n+1];
        memset(dp,false,sizeof(dp));
        
        if(m+n!=n1){
           return false;
        }
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 and j==0){
                    dp[i][j]=true;
                }
                else if(i==0){
                    if(s2[j-1]==s3[j-1]){
                        dp[i][j]=dp[i][j-1];
                    }
                }
                else if(j==0){
                    if(s1[i-1]==s3[i-1]){
                        dp[i][j]=dp[i-1][j];
                    }
                }
                else if(s1[i-1]==s3[i+j-1] and s2[j-1]!=s3[i+j-1]){
                    dp[i][j]=dp[i-1][j];
                }
                 else if(s1[i-1]!=s3[i+j-1] and s2[j-1]==s3[i+j-1]){
                    dp[i][j]=dp[i][j-1];
                }
                 else if(s1[i-1]==s3[i+j-1] and s2[j-1]==s3[i+j-1]){
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
            }
        }
        
        return dp[m][n];
    }
};