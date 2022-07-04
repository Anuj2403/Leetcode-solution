class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num1=-1;
        int num2=-1;
        int count1=0;
        int count2=0;
        
        for(auto num:nums)
        {
            if(num==num1)
                count1++;
            else if(num==num2)
                count2++;
            else if(count1==0)
            {
                num1=num;
                count1=1;
            }
            else if(count2==0)
            {
                num2=num;
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int>ans;
        count1=0;
        count2=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
        }
        
        if(count1 > (n/3))
            ans.push_back(num1);
        if(count2 > (n/3))
            ans.push_back(num2);
        
        return ans;
    }
};

/*
// Better approach but not optimized - O(n) space


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int limit=n/3;
        
        unordered_map<int,int>m;
        vector<int>ans;
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        for(auto it:m)
        {
            if(it.second>limit)
                ans.push_back(it.first);
        }
        return ans;
    }
};

*/