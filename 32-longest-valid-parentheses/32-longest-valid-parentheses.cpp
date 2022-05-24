class Solution {
public:
    int longestValidParentheses(string s) {
	    int ans=0;
    	stack<int>st;
	    st.push(-1);

    	for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(i);
    		else
            {       
	    		st.pop();
                
		    	if(st.empty())
                    st.push(i);
    			else
                    ans=max(ans, i-st.top());
    		}   
        }
	    return ans;
    }
};

/*

//Wrong Approach -
class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else
            {
                if(st.top()=='(')
                {
                    st.pop();
                    count++;
                }
                else
                {
                    st.push(s[i]);
                }       
            }
        }
        return 2*count;
    }
};

*/