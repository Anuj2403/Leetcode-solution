class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        
        unordered_map<int,int>m;
        
        for(auto it:nums)
            m[it]++;
        
        int sum=0;
        for(auto it:m)
        {
            sum+=it.second/2;
        }
        ans.push_back(sum);
        ans.push_back(n-(2*sum));
        
        return ans;
    }
};