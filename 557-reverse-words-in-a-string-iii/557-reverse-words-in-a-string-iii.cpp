class Solution {
public:
    string solve(string &ans){
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string reverseWords(string s) {
        string ans="";
        string result="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                result+=solve(ans);
                result+=' ';
                ans="";
            }
            else
            {
                ans+=s[i];
            }
        }
        result+=solve(ans);
        return result;
    }
};