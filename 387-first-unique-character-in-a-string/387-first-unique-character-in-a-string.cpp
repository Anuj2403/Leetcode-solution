class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(auto it:s)
            m[it]++;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]==1)
                return i;
        }
        return -1;
    }
};
/*
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;              // Hashing method is used
        for(int i=0;i<s.length();i++)
        {
            if(m.count(s[i])==0)               // first character 'l'==0 so its count increment by 1
                m[s[i]]=1;
            else
                m[s[i]]++;                     // when count of e==1 is come then it goes to else part then it increase their count
        }
        
        for(int i=0;i<s.length();i++)         // this loop checks the 1st unique character in a string
        {
            if(m[s.at(i)]==1)                 // it means that its total count in a whole string is 1 it means that it is unique
                return i;                     // return its index
        }
        return -1;
        
    }
};
*/