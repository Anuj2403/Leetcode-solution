class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string ans="";
        if(n<=1)
            return s;
        
        stack<char> st;
        for (int i=0;i<n;i++)
        {
            st.push(s[i]);
            while(!st.empty() && ((st.top()==s[i+1]+32) || (st.top()==s[i+1]-32)))
            {
                st.pop();
                i++;
            }
        }
	
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};