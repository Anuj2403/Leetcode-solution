class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>hashSet;
        
        //putting the elements in the hashset
        for (int num: nums)
        {
            hashSet.insert(num);
        }
        int longestStreak = 0;
        
        //Traversing to the araay and checking that it exist or not in the hashset
        for (int num: nums)
        {
            if (!hashSet.count(num - 1))
            {
                int currentNum = num;
                int currentStreak = 1;
                
                while (hashSet.count(currentNum + 1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};
// optimal 

/*
// Ankita Solution -

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

*/