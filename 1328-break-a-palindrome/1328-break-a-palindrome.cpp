class Solution {
public:
    string breakPalindrome(string s) {
        
        int n = s.size ();
        // if n == 1, then there is no way to make it non pallindrome
        if (n == 1) return "";
        
        for (int i = 0; i < n; i++) {
            
            if (s [i] != 'a') {  
                
                // edge case
                // if string of odd size and we are at the middle
                // there is no means of changing the character
                // since it would remain a pallindrome only
                if (i == n / 2 and (n & 1)) continue;
                
                // if found any letter other than 'a', then change it to 'a'
                // to make it lexographically smallest
                s [i] = 'a';
                return s;
            }
        }
        // if every letter of the sring was 'a'
        // change the last letter to 'b'
        // to make it lexographically smallest
        s [n - 1] = 'b';
        return s;
    }
};