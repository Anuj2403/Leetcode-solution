class Solution {
public:
    string fun(string s){
        unordered_map<char,int> m;
        for(char c:s){
            if(!m.count(c))
                m[c]=m.size();
        }
        for(int i=0;i<s.length();i++)
            s[i]='a'+m[s[i]];
        return s;
    }
    
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> ans;
        for(auto i:w){
            if(fun(i)==fun(p)){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};