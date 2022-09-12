class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        if(n==0)
            return 0;
        
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=n-1;
        
        if(tokens[0]>power)
            return 0;
        
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i++];
                score++;
            }
            else if((j-i)<=1 and tokens[j]>power )
                break;
            else{
                power+=tokens[j--];
                score--;
            }
        }
        return score;
    }
};


