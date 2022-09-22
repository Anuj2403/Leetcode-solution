class Solution {
public:
    string reverseWords(string s) {
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                int j=i;
                for(;j<s.length() and s[j]!=' ';j++){}
                
                reverse(s.begin()+i,s.begin()+j);
                i=j-1;
            }
        }
        return s;
    }
};

/*

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

*/