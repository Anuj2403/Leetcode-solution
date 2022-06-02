class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int a=m.size();
        int b=m[0].size();
        vector<vector<int>>v(b,vector<int>(a,0));
        
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
                v[j][i]=m[i][j];
        }
        return v;
    }
};