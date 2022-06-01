class Solution {
public:
    bool issafe(vector<vector<char>>& board,int i, int j,string word, int k){
        if(board[i][j]==word[k]){
            return true;
        }
        return false;
    }
    
    bool solve(vector<vector<char>>& board,int i, int j,int m,int n,string word, int k){
        if(k==word.size()){
            return true;
        }
        if(i < 0 || i == m || j < 0 || j == n){
            return false;
        }
        if(issafe(board,i,j,word,k)){
            char temp=board[i][j];
            board[i][j]='0';
            if((solve(board,i+1,j,m,n,word,k+1) || solve(board,i-1,j,m,n,word,k+1) || solve(board,i,j+1,m,n,word,k+1) || solve(board,i,j-1,m,n,word,k+1))){
                return true;
            }
            //backtracking
             board[i][j]=temp;
        }
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(solve(board,i,j,m,n,word,k)){
                    return true;
                }
            }
        }
        return false;
    }
};
/*

// compiler error -
class Solution {
public:
    bool dfs(vector<vector<char>> &board, int i, int j, int count,string word){
        if(count==word.size())
            return true;
        if(i==-1 || i==board.size() || j==-1 || j==board[0].size() || board[i][j]!=word.at(count))
            return false;
        char temp=board[i][j];
        board[i][j]='*';
        bool found=dfs(board,i+1,j,count+1,word) ||dfs(board,i-1,j,count+1,word) ||dfs(board,i,j+1,count+1,word) ||dfs(board,i,j-1,count+1,word);
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word.at[0] && dfs(board,i,j,0,word))
                    return true;
            }
        }
        return false;
    }
};

*/