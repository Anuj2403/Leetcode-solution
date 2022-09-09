class Solution {
public:
    
    static bool compare(vector<int>& v1,vector<int>& v2){
       if(v1[0]==v2[0])
           return v1[1]>v2[1];
        return v1[0]<v2[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),compare);
        
        int ans=0; 
        int mtn=INT_MIN;
               
         for(int i=v.size()-1;i>=0;i--){
             if(v[i][1]<mtn)
                 ans++;
             mtn=max(mtn,v[i][1]);
         }
    return ans;
    }
    
};