class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& v, vector<vector<int>>& q) {
        vector<int> ans;
        
        int sum=0;
        for(auto i:v){
            if(i%2==0)
                sum+=i;
        }
        
        for(auto i:q){
            if(v[i[1]]%2==0) sum-=v[i[1]];
            v[i[1]]+=i[0];
            if(v[i[1]]%2==0) sum+=v[i[1]];
            ans.push_back(sum);
        }
        return ans;
      
    }
};
/*

// TLE -

class Solution {
public:
    int sum(vector<int> &nums){
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<int>ans;
        
        for(int i=0;i<q.size();i++)
        {
            int x=q[i][1];
            nums[x]=nums[x]+q[i][0];
            ans.push_back(sum(nums));
        }
        return ans;
    }
};

*/

