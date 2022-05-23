class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')')
            {
                if(st.empty())
                    count++;
                
                else if(st.top()=='(')
                      st.pop();
                
                else
                    st.push(s[i]);
            }
            else if(s[i]=='(')
                st.push(s[i]);
        }
        return st.size()+count;
    }
};

/*
 
// Iterative Approach -
          int n=s.size();
        int res=0;
        int balance=0;
        
        for (int i = 0; i < n; i++)
        {
            balance+=s[i]=='(' ? 1 : -1;
            
            if(balance==-1) 
            {
                res++;
                balance++;
            }
        }
        return res + balance;


*/

/*
// Wrong Approach -

        int n=s.size();
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                count1++;
            else
                count2++;
        }
        return abs(count1-count2);
    
// 2nd wrong approach -
 int n=s.size();
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' && s[i+1]==')')
                i=i+1;
            else
                st.push(s[i]);
        }
        return st.size();
    }
// 3rd wrong approach -
 int n=s.size();
        stack<char>st1;
        stack<char>st2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' && st2.size()==0)
                st1.push(s[i]);
            else if(s[i]==')' && st1.size()==0)
                st2.push(s[i]);
            else
                st1.pop();   
        }
        return st2.size();


*/