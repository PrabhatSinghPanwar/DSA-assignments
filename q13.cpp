class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        vector<pair<int, int> > temp ;
        
        for(int i=0; i<matrix.size(); i++) {
            int mini=INT_MAX ;
            int x, y ;
            for(int j=0; j<matrix[0].size(); j++) {
                
                if(mini>matrix[i][j]) {
                    x = i ;
                    y = j ;
                    mini = matrix[i][j] ;
                }
            }
            temp.push_back(make_pair(x, y)) ;
        }
        
        // for(auto i : temp)
        //     cout<<i.first<<i.second<<" " ;
        
        int ans=0 ;
        
        
        for(auto i=0; i<temp.size(); i++) {
                
            int maxi=INT_MIN ;
            for(int j=0 ; j<matrix.size(); j++) {
                
                if(matrix[j][temp[i].second] > maxi)
                    maxi = matrix[j][temp[i].second] ;
            }
            
            if(maxi == matrix[temp[i].first][temp[i].second]) {
                ans = maxi ;
                break ;
            }
            
        }
        
        if(ans==0)
            return {} ;
        
     return {ans} ;   
    }
};
