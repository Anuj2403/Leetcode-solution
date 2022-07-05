class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(auto i:nums)
            s.insert(i);
        
        vector<int> num;
        for(auto i:s)
            num.push_back(i);
        
        
        sort(num.begin(),num.end());
        int n=num.size();
        
        if(n==0)
            return 0;
        
        int ans=0,temp_ans=0;
        
        for(int i=0;i<n-1;i++){
            if((num[i+1]-num[i])==1){
                temp_ans++;
            }
            else{
                ans=max(ans,temp_ans);
                temp_ans=0;
            }
                
        }
        
        return ans=max(ans,temp_ans)+1;
    }
};