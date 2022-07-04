class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=(n*m)-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};


/*
// Better approach but not optimized --> Linear appraoch
//T.C=O(N)   || S.C=O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int r=0;
        int c=m-1;
        bool flag=false;
        
        while(r<n and c>=0)
        {
            if(matrix[r][c]==target)
            {
                flag=true;
                break;
            }
            else if(matrix[r][c]>target)
                c--;
            else
                r++;
        }
        return flag;
    }
};

*/