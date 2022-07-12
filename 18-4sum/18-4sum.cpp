class Solution {
public:
    #define ll long long
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>res;
        if(nums.empty())
            return res;
        
        for(int i=0;i<n;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                ll target_2 = (ll)((ll)(target-nums[j])-(ll)nums[i]);
                int front=j+1;
                int back=n-1;
                
                while(front<back)
                {
                    ll two_sum=nums[front]+nums[back];
                    
                    if(two_sum<target_2)
                        front++;
                    else if(two_sum>target_2)
                        back--;
                    else
                    {
                        vector<int>quadruplet(4,0);
                        quadruplet[0]=nums[i];
                        quadruplet[1]=nums[j];
                        quadruplet[2]=nums[front];
                        quadruplet[3]=nums[back];
                        
                        res.push_back(quadruplet);
                        
                        //processing the duplicateas of number 3
                        while(front<back && nums[front]==quadruplet[2])
                            front++;
                        
                        //processing the duplicateas of number 4
                        while(front<back && nums[back]==quadruplet[3])
                            back--;
                    }
                }
                //processing the duplicateas of number 2
                while(j+1 < n && nums[j+1]==nums[j])
                    j++;
            }
            //processing the duplicateas of number 1
            while(i+1 < n && nums[i+1]==nums[i])
                i++;
        }
        return res;
    }
};


