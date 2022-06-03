class NumMatrix {
    vector<vector<long>> dp;
    
public:
    NumMatrix(vector<vector<int>>& M) {
        int ylen = M.size() + 1, xlen = M[0].size() + 1;
        dp = vector<vector<long>>(ylen, vector<long>(xlen, 0));
        for (int i = 1; i < ylen; i++)
            for (int j = 1; j < xlen; j++)
                dp[i][j] = M[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
    }
    
    int sumRegion(int R1, int C1, int R2, int C2) {
        return (int)(dp[R2+1][C2+1] - dp[R2+1][C1] - dp[R1][C2+1] + dp[R1][C1]);
    }
};
//Reference -->https://leetcode.com/problems/range-sum-query-2d-immutable/discuss/1204168/JS-Python-Java-C%2B%2B-or-Easy-4-Rectangles-DP-Solution-w-Explanation

//Link -->https://www.youtube.com/watch?v=7mL8KJ4Pi70

/*
//some mistake in the code -

class NumMatrix { 
public:
   // int dp[rows+1][col+1];
    NumMatrix(vector<vector<int>>& matrix){
        if(matrix.size()==0 || matrix[0].size()==0)
            return;
        
        int rows=matrix.size();
        int col=matrix[0].size();
        int dp[rows+1][col+1];
        
        for(int i=0;i<rows;i++)
            for(int j=0;j<col;j++)
                dp[i+1][j+1]= matrix[i][j] + dp[i][j+1] + dp[i+1][j] - dp[i][j];
    }
    
    int sumRegion(int row1, int col1, int row2, int col2){
        return dp[row2+1][col2+1] - dp[row2+1][col1] - dp[row1][col2+1] + dp[row1][col1];
    }
};

*/


/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */