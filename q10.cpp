class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        vector<int> v ;

        
        int n=grid.size() ;
        int count=0 ;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]!=0)
                    count++ ;
        
        for(int i=0; i<n; i++) {
            int maxv=0 ;
            for(int j=0; j<n; j++) {
                
                if(maxv<grid[i][j])
                    maxv = grid[i][j] ;
            }
            v.push_back(maxv) ;
        }
        
        for(int i=0; i<n; i++) {
            int maxv=0 ;
            for(int j=0; j<n; j++) {
                
                if(maxv<grid[j][i])
                    maxv = grid[j][i] ;
            }
            v.push_back(maxv) ;
        }
        
        // for(int i : v)
        //     cout<<i<<" " ;
        
        for(int i : v)
            count += i ;
        
        return count;
    }
};
