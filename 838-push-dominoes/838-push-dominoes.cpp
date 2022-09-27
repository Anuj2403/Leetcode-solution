class Solution {
public:
    string pushDominoes(string s) {
        int n=s.size();
        vector<int> right(n,0), left(n,0);
        
        char prev='.';
        int time=1;
        for(int i=0;i<n;i++){
            if(s[i]=='R')
            {
                prev='R';
                time=1;
                continue;
            }
            else if(s[i]=='L')
                prev='L';
            else if(prev=='R' and s[i]=='.' ){
                right[i]=time;
                time++;
            }
        }
        
        prev='.';
        time=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='L'){
                prev='L';
                time=1;
                continue;
            }
            else if(s[i]=='R')
                prev='R';
            else if(prev=='L' and s[i]=='.'){
                left[i]=time;
                time++;
            }
        }
        
        string ans="";
        for(int i=0;i<n;i++){
            if(left[i]==0 and right[i]==0)
                ans+=s[i];
            else if(left[i]==0)
                ans+='R';
            else if(right[i]==0)
                ans+='L';
            else if(left[i]==right[i])
                ans+='.';
            else if(left[i]<right[i])
                ans+='L';
            else
                ans+='R';
        }
        return ans;
    }
};