class Solution {
public:
	int fib(int N) {
		if(N<2)
            return N;

		int a=0;
		int b=1;
		for(int i=2;i<=N;i++)
        {
			b=a + b;
			a=b - a;
		}
		return b;
	}
};
//Using two variable
//T.C- O(N)  ||  S.C - O(1)
                            



/*

//Recursive approach -->   Time Complexity - O(2^N)   ,Space Complexity - O(N)
class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        else
            return fib(n-1)+fib(n-2); 
    }
};

*/

/*

class Solution {
public:
	int fib(int N) {
		if(N < 2){
			return N;
		}
		int dp[N + 1];
		dp[0] = 0;
		dp[1] = 1;
		for(int i = 2; i <= N; i++){
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[N];
	}
};
 // Dynamic programming
 Time Complexity - O(N)
 Space Complexity - O(N)
          
*/