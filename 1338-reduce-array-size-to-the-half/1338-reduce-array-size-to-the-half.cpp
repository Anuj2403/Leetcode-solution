class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(auto it:arr)
        {
            m[it]++;
        }
        
        priority_queue<int>pq;
        for(auto it:m)
        {
            pq.push(it.second);
        }
        
        int ans=0;
        int minus=0;
        
        while(!pq.empty())
        {
            ans++;
            minus+=pq.top();
            pq.pop();
            
            if(minus>=n/2)
                break;
        }
        return ans;
    }
};