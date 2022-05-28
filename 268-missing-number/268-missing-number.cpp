class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
                return i;
        }
        return i;
    }
};

/*
  // sum of first n natural number
   
   int result= nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
   return result;


*/