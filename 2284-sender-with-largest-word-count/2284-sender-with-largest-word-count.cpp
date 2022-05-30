class Solution {
public:
    string largestWordCount(vector<string>& m, vector<string>& s) {
        unordered_map<string,int>mp;
        int max_cnt=0;
        string res;
        
        for(int i=0;i<m.size();i++)
        {
            int words = count(begin(m[i]), end(m[i]), ' ') + 1;
            int total=mp[s[i]]+=words;
            
            if(total>max_cnt||total==max_cnt&&s[i]>res)
            {
                max_cnt=total;
                res=s[i];
            }
        }
        return res;
    }
};