class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int n = img.size() ;
        int m = img[0].size() ;
        
        
        vector<vector<int>> result(n, vector<int>(m, 0));
        
        int z=0, y=0 ;
        
        for(int i=0; i<img.size(); i++) {
            for(int j=0; j<img[i].size(); j++) {
                
                int sum=0, count=0 ;
                
                if(i-1>=0 && j-1>=0) {
                    sum += img[i-1][j-1] ;
                    count++ ;
                }
                
                if(i-1>=0 && j>=0) {
                    sum+= img[i-1][j] ;
                    count++ ;
                }
                
                if(i-1>=0 && j+1<m) {
                    sum += img[i-1][j+1] ;
                    count++ ;
                }
                
                if(j-1>=0 && i>=0) {
                    sum+= img[i][j-1] ;
                    count++ ;
                }
                
                if(j+1<m && i>=0) {
                    sum+=img[i][j+1] ;
                    count++ ;
                }
                
                if(i+1<n && j-1>=0) {
                    sum+=img[i+1][j-1] ;
                    count++ ;
                }
                
                if(i+1<n && j<m) {
                    sum+=img[i+1][j] ;
                    count++ ;
                }
                
                if(i+1<n && j+1<m) {
                    sum += img[i+1][j+1] ;
                    count++ ;
                }
                
                count++ ;
                sum += img[i][j] ;
                
                
                result[i][j] = sum/count ; 
                
            }
        }
        
    return result ;
    }
};