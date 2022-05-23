class Solution {
public:
    int minSwaps(string s) {
        stack<int>st;
        int count=0;
        
        for(char c:s)
        {
            if(c=='[')
                st.push(c);
            else
            {
                if(!st.empty() && c==']')
                    st.pop();
                else
                    count++;
            }
        }
        return (count+1)/2;
    }
};

/*
//wrong approach -
      int j=s.size()-1;
        int i=0;
        int count=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                count++;
                i++;
                j--;
            }
            
        }
        return count-1;
*/