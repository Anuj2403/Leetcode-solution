class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //We know that all numbers are positive, so we make the number negative to indicate that we saw it           already.
        vector<int> res;
        int n = nums.size();
        
        for (int i = 0; i < n;i++)
        {
            int num = abs(nums[i]);
            
            if (nums[num-1] < 0)
                res.push_back(num);
            else nums[num-1] *= -1;
        }
        return res;
    }
};

//Reference -->https://leetcode.com/problems/find-all-duplicates-in-an-array/discuss/1506007/C%2B%2B-2-Simple-and-Easy-Solutions-O(n)-Time-O(1)-Space

/*

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //We add n to the index of the number we have, to indicate that we saw it already.
        vector<int> res;
        int n = nums.size();
        
        for (int i = 0; i < n;i++)
        {
            int num = nums[i] % n;;
            
            if(num == 0)
                num = nums[i] <= n ? nums[i] : nums[i] - n;

            if(nums[num-1] > n)
                res.push_back(num);
            else
                nums[num-1] += n;
        }
        
        return res;
    }
};
//Reference -->https://leetcode.com/problems/find-all-duplicates-in-an-array/discuss/1506007/C%2B%2B-2-Simple-and-Easy-Solutions-O(n)-Time-O(1)-Space


*/

/*
   // It take extra space -
      
       unordered_map<int,int>m;
        vector<int>ans;
        for(auto it:nums)
            m[it]++;
        for(auto it:m)
        {
            if(it.second>1)
                ans.push_back(it.first);
        }
        return ans;
        



*/