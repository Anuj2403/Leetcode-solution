class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>v;
        unordered_map<string, int>mp;
        
        for(int i=0;i<list1.size();i++)
        {
            mp[list1[i]]=i;
        }
        int min1=INT_MAX;
        int sum;
        
        for(int i=0;i<list2.size();i++)
        {
            if(mp.find(list2[i])!=mp.end())
            {
                sum=mp[list2[i]]+i;
                
                if(sum<min1)
                {
                    min1=sum;
                    v.clear();
                    v.push_back(list2[i]);
                }
                else if(sum==min1)
                {
                    v.push_back(list2[i]);
                }
            }
        }
        return v;
    }
};