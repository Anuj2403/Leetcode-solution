class Solution {
public:
    bool isPowerOfFour(int n) {
          // Recursion Approach
//         if(n==1)
//             return true;
//         if(n<=0 ||n%4!=0)
//             return false;
        
//         return isPowerOfFour(n/4);
        
        //Bit Manipulation  -   T.C=O(1)   ,S.C=O(1)
        
        if(n <= 0){
			return false;
		}
		if(n & (n - 1)){
			return false;
		}
		return !(n & (0xAAAAAAAA));
        
    }
};


   