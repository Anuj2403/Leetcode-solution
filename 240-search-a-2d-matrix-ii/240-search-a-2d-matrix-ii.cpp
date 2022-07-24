class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        if(n==0)
            return false;
        int r=0;
        int c=m-1;
        bool flag=false;
        while(r<n&&c>=0)
        {
            if(matrix[r][c]==target)
                {
                    flag=true;
                    break;
                }
            matrix[r][c]>target?c--:r++;
        }
        return flag;
    }
};