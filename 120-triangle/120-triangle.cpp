class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
      for(int i=1;i<a.size();i++)
      {
          for(int j=0;j<a[i].size();j++)
          {
              int sum=0;
              if(j==0)
                  sum=a[i][j]+a[i-1][j];
              else if(j==a[i].size()-1)
                  sum=a[i][j]+a[i-1][j-1];
              else
                  sum=a[i][j]+min(a[i-1][j],a[i-1][j-1]);
              a[i][j]=sum;
          }
      }
        int ans=INT_MAX;
        for(int i=0;i<a.size();i++)
            ans=min(ans,a[a.size()-1][i]);
        return ans;
    }
};
