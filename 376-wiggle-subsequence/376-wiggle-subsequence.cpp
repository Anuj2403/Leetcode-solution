class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int peak=1;
        int valley=1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
                peak = valley + 1;
            
            else if(nums[i]<nums[i-1])
                valley = peak + 1;
        }
        return max(peak , valley );
    }
};

//Reference -->https://leetcode.com/problems/wiggle-subsequence/discuss/2229495/C%2B%2B-O-(-N-)-oror-EXPLAINED-oror