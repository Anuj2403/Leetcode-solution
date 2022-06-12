class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = size(nums), cur_sum = 0, ans = 0, l = 0, r = 0;
        bool freq[10001]{false};
        
        while(r < n)
        {
            while(freq[nums[r]])
                cur_sum -= nums[l], freq[nums[l++]] = false;
            cur_sum += nums[r], freq[nums[r++]] = true;  
            ans = max(ans, cur_sum);    
        }
        return ans;
    }
};
//Reference -->https://leetcode.com/problems/maximum-erasure-value/discuss/1235753/Maximum-Erasure-Value-or-Easy-Solution-using-2-Pointers-and-Hashset-w-Explanation