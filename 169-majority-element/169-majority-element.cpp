class Solution {
public:
    int majorityElement(vector<int>& a) { 
        int count=0;
        int element=0;
        
        for(auto it:a)
        {
            if(count==0)
                element=it;
            if(element==it)
                count+=1;
            else
                count-=1;
        }
        return element;
    }
};

//  Moore's Voting Algorithm
// T.C= O(N)  S.C=O(1)

/*

// Better Approach but taking O(N) space -

class Solution {
public:
    int majorityElement(vector<int>& a) { 
        unordered_map<int,int>m;
        int n=a.size();
        int limit=n/2;
        int ans;
        
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            
        }
        
        for(auto h:m)
        {
            if(h.second>limit)
            {
               ans=h.first;
            }
        }
        
        return ans;
       
    }
};

*/

