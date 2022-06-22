//    max-heap using priority_queue
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
        {
            pq.pop();
        }
        return pq.top();
    }
};


/*


     //Max Heap  -> this is also same for above code
     
     
     
     priority_queue<int>pq;
        for (int i = 0; i <nums.size(); i++) {
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
        
        
        
     
    // Min-Heap 
    
    
      priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)      //  for (int num : nums)
        {
            pq.push(nums[i]);               //    pq.push(num);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
        
        
*/