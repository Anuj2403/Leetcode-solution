class Solution {
public:
    
    int help(int sum,vector<int>& nums, int target,vector<int> &dp){
                                                                
      if(sum>target) return 0;
        if(sum==target) return 1;
        if(dp[sum]!=-1) return dp[sum];
        int ways=0;
        
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=target){
                ways+=help(sum+nums[i],nums,target,dp);
            }
        }
        return dp[sum]= ways;
       
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        int sum=0;
        vector<int> dp;
        dp.resize(1001);
        fill(dp.begin(), dp.end(), -1);
        int count=0;
        return help(sum,nums,target,dp);
    }
};