class Solution {
public:
    struct node{
        char c;
        int val;
    };
    
    int minCost(string colors, vector<int>& neededTime) {
        stack<node> st;
        int n=colors.size();
        int res=0;
        
        for(int i=0; i<n; i++){
            
            if(!st.empty() && st.top().c==colors[i])
            {
                if(st.top().val<neededTime[i])
                {
                    res+=st.top().val;
                    st.pop();
                    st.push({colors[i], neededTime[i]});
                }
                else{
                    res+=neededTime[i];
                }
            }
            
            else{
                st.push({colors[i], neededTime[i]});
            }
        }
        
        return res;
    }
};