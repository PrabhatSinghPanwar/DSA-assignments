class Solution {
public:
    
    
    bool isinside(vector<vector<int>>& grid, int i, int j) {
        return i>=0 && i<grid.size() && j>=0 && j<grid.size() ; 
    }
    
    
    int surfaceArea(vector<vector<int>>& grid) {
        
        int ans=0 ;
        int n=grid.size() ;
        
        int r[] = {-1, 0, 1, 0} ;
        int c[] = {0, 1, 0, -1} ;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                
                if(grid[i][j]>0) {
                    ans = ans+2 ;
                    
                    for(int k=0; k<4; k++) {
                    
                        int temp=0 ;
                    
                        if(isinside(grid, i+r[k], j+c[k]))
                            temp = grid[i+r[k]][j+c[k]] ;
                    
                        ans += max(grid[i][j]-temp, 0) ;
                    }
                }
            }
        }
    return ans; 
    }
};
