class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())           // if length of both strings are not equal then there anagram cannot be exist
            return false;
        
        unordered_map<char,int>m;            // Hashing method
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;                      // increment the count of s1 string
            m[t[i]]--;                      // decrement the count of 2nd string
        }
        
        for(auto it:m)                     // check ifd the values in hash table are equal to zero then it means that both strings                                               count cancel each other it means that they are anagram
        {
            if(it.second)                 //if this loop runs then it means that it has 1 value thne it means that there hash value                                             cannot be zero since they are not anagram hence we return the false
                return false;
        }
        
        return true;
       
    }
};


/*


Method - Sorting

        if(s.length()!=t.length())
            return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        
        
*/