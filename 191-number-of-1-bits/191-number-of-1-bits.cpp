class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;      // count of set bit
                           // n>0 -> value of N contains atleast one set bit
        while(n>0)         // iterate until all bits are traversed
        {
            count++;       // Increment the count
            n=n&(n-1);     //change the first set bit from right to 0
        }
        return count;    
        
    }
};