class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        if(n<k)
            return  false;
        unordered_set<string>st;
        for(int i=0;i<=n-k;i++)
        {
            st.insert(s.substr(i,k));
        }
        return st.size()==pow(2,k);
    }
};
// link-->https://www.youtube.com/watch?v=Xh1y1j8K1nk