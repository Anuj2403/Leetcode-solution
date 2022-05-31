class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count=0;
        for(char c:s)
        {
            if (c == '(' && count++ > 0)
                ans+= c;
            if (c == ')' && count-- > 1)
                ans+= c;
        }
        return ans;
    }
};
/*

// Wrong appraoch -

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        stack<char>st;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')' && s[i+1]=='(')
            {
                ans+=st.top()+s[i];
                st.pop();
            }
            else if(s[i]==')' && s[i+1]==')')
            {
                ans+=st.top()+s[i];
                st.pop();
                
            }
            else
                st.pop();
        }
        return ans;
    }
};
                // if(st.size()>1)
                // {
                //     ans+=st.top()+s[i];
                //     st.pop();
                // }
                // else
                //     st.pop();
*/                