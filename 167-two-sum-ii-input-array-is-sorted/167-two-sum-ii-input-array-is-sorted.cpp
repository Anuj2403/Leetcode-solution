class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<end)
        {
          if(nums[start]+nums[end]>target)
          {
              end--;
          }
          else if(nums[start]+nums[end]<target)
            {
                start++;
            }
          else
          {
              return {start+1,end+1};
          }
        }
        return {};
    }
};


/*

// Ankita Solution -

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> v;
        int i=0,j=n-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]>target)
                j--;
            else
                i++;
        }
        
        return v;
    }
};


*/