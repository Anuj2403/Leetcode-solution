class Solution {
public:
    // find next permutation
    void nextPermutation(vector<int>& a){
        int n=a.size();
        int k,l;
        
        // finding the 1st break pointb ytraversing from backside
        for(k=n-2;k>=0;k--)
        {
            if(a[k]<a[k+1])
                break;
        }
        //edge case when there is no breakpoint
        if(k<0)
            reverse(a.begin(),a.end());
        //finding the 2nd breakpoint by again traversing from backside
        else
        {
            for(l=n-1;l>k;l--)
            {
                if(a[l]>a[k])
                    break;
            }
            swap(a[k],a[l]);
            reverse(a.begin()+k+1, a.end());
        }
    }
};

/*

 int idx=-1;
        int n=a.size();
        // find a breakpoint:
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                idx=i;
                break;
            }
            
        }
         // if no breakpoint
        if(idx==-1)
        {
            reverse(a.begin(),a.end());
        }
          // if found a breakpoint
        else
        {
            int prev=idx;
            for(int i=idx+1;i<n;i++)
            {
                if(a[i]>a[idx-1]and a[i]<=a[prev])
                {
                    prev=i;
                }
            }
            swap(a[idx-1],a[prev]);
            reverse(a.begin()+idx,a.end());
        }
        
        
//Reference --> https://leetcode.com/problems/next-permutation/discuss/1241286/C%2B%2B-oror-simple-to-understand

*/