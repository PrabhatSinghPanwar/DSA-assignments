class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int r1 = mat.size() ;
        int c1 = mat[0]. size() ;

        vector<vector<int>> ans(r) ;
        vector<int> temp ;

        if(r1*c1 != r*c)
            return mat ;

        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[i].size(); j++)
                temp.push_back(mat[i][j]) ;


        int count=0 ;
        
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {

                ans[i].push_back(temp[count]) ;
                count++ ;
            }
        }

       return ans ; 
    }
};
