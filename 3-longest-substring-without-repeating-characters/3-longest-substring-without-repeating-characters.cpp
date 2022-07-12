class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>m(256,-1);
        int left=0;
        int right=0;
        int len=0;
        int n=s.size();
        
        while(right<n)
        {
            if(m[s[right]] !=-1)
                left=max(left, m[s[right]]+1);   
            // directly jump the left pointer when duplicate character is found
            
            m[s[right]]=right;   // store in map
            
            len= max(len, right-left+1);
            right++;
        }
        return len;
    }
};

//Striver SDE sheet

/*

// Using set -

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

*/