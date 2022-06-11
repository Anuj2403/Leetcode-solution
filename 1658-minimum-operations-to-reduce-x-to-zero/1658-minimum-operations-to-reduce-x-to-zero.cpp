class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int i=0,j=0,res=INT_MAX;
        int sum=accumulate(begin(nums),end(nums),0);
        
        while(i<=j)
        {
            if(sum>=x)
            {
                if(sum==x)
                    res=min(res,i+n-j);
                 if(j<n)
                {
                    sum-=nums[j++];
                }
                else
                    break;
                
            }
            else
                sum+=nums[i++];
        }
       return res==INT_MAX?-1:res;
    }
};