class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
        int l=0;
        unordered_set<char> visited;
        int maxLen=0;
        
        for(int r=0;r<n;r++)
        {
            if(visited.find(s[r])==visited.end())
            {
                visited.insert(s[r]);
                maxLen=max(maxLen,r-l+1);
            }
            else
            {
                while(l!=r && s[l]!=s[r])
                    visited.erase(s[l++]);
                l++;
                maxLen=max(maxLen,r-l+1);
            }
        }
        return maxLen;
    }
};