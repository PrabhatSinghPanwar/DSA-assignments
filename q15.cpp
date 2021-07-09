class Solution {
public:
    
    
    void rotate(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n=mat.size() ;
        int m=mat[0].size() ;
        
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<m; j++) {

                swap(mat[i][j], mat[j][i]); ;
                
            }
        }
        
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m/2; j++) {
                
                int temp=mat[i][j] ;
                mat[i][j]=mat[i][m-j-1] ;
                mat[i][m-j-1]=temp ;
                
            }
        }
        
//         for(int i=0; i<n; i++) {
//             for(int j=0; j<m; j++) {
                
//                 cout<<mat[i][j] ;
                
//             } 
//         cout<<endl;    
//         }
        
    }
    
    
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int k=4 ;
        
        
        while(k--) {
            
            rotate(mat, target) ;
            
            if(mat==target)
                return true ;
        }
    
    return false ;
    }
};
