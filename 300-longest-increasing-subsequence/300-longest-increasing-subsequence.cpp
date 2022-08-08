class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>temp;
        temp.push_back(nums[0]);
        int len=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>temp.back())
            {
                temp.push_back(nums[i]);
                len++;
            }
            else
            {
                auto ind =lower_bound(temp.begin(),temp.end(),nums[i]);
                //find the index of greatest element if it is exist otherwise it gives first index                      greater than that element
                *ind=nums[i];
                //* is mentioned b/c it return the iterator of that index
                //when index is found than placed the element at that index in vector temp
            }
        }
        return len;
    }
}; 
