class Solution {
public:
    int minDistance(string& word1, string& word2) {        
    if(size(word1) < size(word2)) swap(word1, word2);
	vector<vector<int> >dp(2, vector<int>(size(word2) + 1));
	for(int i = 0; i <= size(word1); i++) 
		for(int j = 0; j <= size(word2); j++) 
			if(!i || !j) dp[i & 1][j] = i + j;
			else dp[i & 1][j] = word1[i - 1] == word2[j - 1] ? dp[(i - 1) & 1][j - 1] : 1 + min(dp[(i - 1) & 1][j], dp[i & 1][j - 1]);
	return dp[size(word1) & 1][size(word2)];
}


};


/*

//Runtime error -


class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0,j=0;
        int step=0;
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        while(i<n && j<m)
        {
            if(word1[i]!=word2[j])
            {
                word1.erase(i);
                word2.erase(j);
                step=step+2;
            }
            i++;
            j++;
        }
        return step;
    }
};


*/