class Solution {
public:
    int maxScore(vector<int>& v, int k) {
     
        int n=v.size(),sum=0;
        vector<int> front(n+1,0),behind(n+1,0);
        
        for(int i=0;i<n;i++){
            sum+=v[i];
            front[i+1]=sum;
        }
        
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=v[i];
            behind[i]=sum;
        }
        
        reverse(behind.begin(),behind.end());
        
        int ans=0;
        for(int i=0;i<=k;i++){
            ans=max(ans,front[i]+behind[k-i]);
        }
        
        return ans;
    }
};