class Solution {
public:
    
      struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp>pq;
        
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        
        for(auto &i:m)
        {
            pq.push({i.second,i.first});
            
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<string>ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};