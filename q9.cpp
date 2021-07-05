class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int rpos, cpos ;
        int count=0 ;
        
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                
                if(board[i][j]=='R'){
                    rpos = i ;
                    cpos = j ;
                }
            }
        }
        
        for(int i=rpos; i>=0; i--) {
            int j=cpos ;
            if(board[i][j]=='B')
                break ;
            
            if(board[i][j]=='p') {
                count++ ;
                break ;
            }
        }
        
        for(int j=cpos; j<board[0].size(); j++) {
            int i=rpos ;
            
            if(board[i][j]=='B')
                break ;
            
            if(board[i][j]=='p'){
                count++ ;
                break ;
            }
        }
        
        for(int i=rpos; i<board.size(); i++) {
            int j=cpos ;
            if(board[i][j]=='B')
                break ;
            
            if(board[i][j]=='p'){
                count++ ;
                break ;
            }
        }
        //cout<<cpos<<rpos<<endl ;
        for(int j=cpos; j>=0; j--) {
            int i=rpos ;
            
            if(board[i][j]=='B')
                break ;
            
            if(board[i][j]=='p'){
                count++ ;
                break ;
            }
        }
        //cout<<count<<endl ;
        
    return count ;
    }
};
