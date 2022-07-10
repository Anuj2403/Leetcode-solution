class Solution {
public:
    int minCostStairs(vector<int> &cost, int idx, vector<int> &memo){
        if(idx==cost.size()-2 || idx==cost.size()-1)
            return cost[idx];
        
        if(memo[idx]!=0)
            return memo[idx];
        
        int x = minCostStairs(cost,idx+1,memo); 
        int y = minCostStairs(cost,idx+2,memo);
        memo[idx]=min(x,y) + cost[idx];
        return memo[idx];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2)
            return min(cost[0],cost[1]);
        
        vector<int>memo(1001);
        
        int x = minCostStairs(cost,0,memo); 
        int y = minCostStairs(cost,1,memo); 
        return min(x,y);
    }
};

// Reference  -->https://www.youtube.com/watch?v=kLCGmZGtImM