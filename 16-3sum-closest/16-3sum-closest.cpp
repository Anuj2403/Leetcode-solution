class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,k;
        int res=nums[0]+nums[1]+nums[2];
        for(i=0;i<=nums.size()-3;i++)
        {
            j=i+1;
            k=nums.size()-1;
            int sum;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                return sum;
                else if(sum<target)
                    j++;
                else
                    k--;
                if(abs(sum-target)<abs(res-target))
                res=sum;
            }
        }
        return res;
      
    } 
};


 

/*

    sort(nums.begin(),nums.end());
        int sum=0;
        if(nums.size()==3)
        {
            for(int i=0;i<3;i++)
            {
                sum+=nums[i];
                
            }
            return sum;
        }
        
        for(int i=0;i<nums.size()-2;i++)
        {
            sum=nums[i]+nums[i+1]+nums[i+2];
            if(sum==target)
                return sum;
            
        }

*/