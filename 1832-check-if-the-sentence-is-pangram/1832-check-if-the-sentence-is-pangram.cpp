class Solution {
public:
    bool checkIfPangram(string sentence) {
         vector<int> al(26,0);
        int i,j,flag=0;
        for( i=0;i<sentence.length();i++)
        {
            j=sentence[i]-96;
            al[j-1]++;
        }
        for(i=0;i<26;i++)
        {
          if(al[i]==0)
          {
              flag=1;
              break;
          }
        }
        if(flag==0)
            return true;
        return false;
    }
};