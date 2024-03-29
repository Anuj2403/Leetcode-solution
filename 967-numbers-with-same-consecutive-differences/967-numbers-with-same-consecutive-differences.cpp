class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        // push all numbers with single digit to a deque
        deque<int> q{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        
        // do the following logic n - 1 times
        
        while (--n > 0) 
        {
            // get the queue size
            int sz = q.size();
            // for each item in the current queue,
            // do the following logic
            for (int i = 0; i < sz; i++) {
                // get the first number from the queue
                int p = q.front();
                // pop it
                q.pop_front();
                // we can potentially add 0 to 9 to the current number p
                for (int j = 0; j < 10; j++) {
                    // we use p % 10 to get the last digit of p
                    // then get the difference with j
                    // since (p % 10) - j can be negative and positive
                    // we use abs to cover both case
                  if (abs((p % 10) - j) == k) {
                    // if the difference is equal to k
                    // we can include digit j 
                    // so multiply the current number by 10 and add j
                    q.push_back(p * 10 + j);
                  }
                }
          }
        }
        // return all numbers in deque, return them in vector<int>
        return vector<int>{q.begin(), q.end()};
    }
};
// Time Complexity: O(2 ^ n)
// Space Complexity: O(2 ^ n)