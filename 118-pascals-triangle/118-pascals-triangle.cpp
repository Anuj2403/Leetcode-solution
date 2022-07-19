class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        
        for(int i=0;i<numRows;i++)      
        {
            ans[i].resize(i+1); // it increases the no. of columns while each traverse of row linearly.
            // for each row --> no. of rows == no. of columns
            
            ans[i][0]=ans[i][i]=1; // we see that each 1st and last element is 1 so we initialize that by 1.
            // 1st idex and last index of each row should be 1
            for(int j=1;j<i;j++)        // this is run fo column
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];  //storing the value by adding 
            }
        }
        return ans;
    }
};