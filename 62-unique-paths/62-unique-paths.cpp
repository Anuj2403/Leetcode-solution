class Solution {
public:
    int uniquePaths(int m, int n) {
        int N =n+m-2;
        int r=m-1;
        double res=1;
        
        for(int i=1;i<=r;i++)
        {
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};

// Optimized Approach - Combinatroics solution 
//T.C =O(n-1) OR O(m-1)   || S.C= O(1)

/*

// Better approach but not optimized

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(i == 0 || j == 0)
                    dp[i][j] = 1;
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        return dp[m-1][n-1];    
    }
};


*/


/*
// Brute approach using recursion 
class Solution {
public:
    int countPaths(int i, int j, int n, int m){
        if(i==(n-1) && j==(m-1))
        return 1;
        
        if(i>=n || j>=m)
        return 0;
        
        else
            return countPaths(i,j+1,n,m) + countPaths(i+1,j,n,m);
    
    }
    int uniquePaths(int m, int n) {
        return countPaths(0,0,m,n);
    }
};

*/