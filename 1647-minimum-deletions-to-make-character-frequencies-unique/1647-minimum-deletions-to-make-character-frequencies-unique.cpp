class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        unordered_map<char,int>m;
        for(auto i:s)
            m[i]++;
        multiset<int, greater<int> > xrr;
        for(auto a:m)
        {
            xrr.insert(a.second);
        }
        int ans{};
        int p = -1;
        while(!xrr.empty())
        {
            auto f = xrr.begin();
            int k = *f;
            if(k==0) break;
            if(k!=p)
            {
                p = k;
                xrr.erase(f);
            }
            else
            {
                xrr.erase(f);
                xrr.insert(k-1);
                ans++;
            }
        }
        return ans;
        
//         vector<int>v;
//         for(auto it:m)
//         {
//             v.push_back(it.second);
//         }
        
    }
};