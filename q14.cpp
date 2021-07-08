class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "" ;
        
        
        sort(strs.begin(), strs.end()) ;
        
        int n = strs.size() ;
        
        int l1=strs[0].size() ;
        int l2=strs[n-1].size() ;
        
        int m = min(l2, l1) ;
        
        for(int i=0; i<m; i++) {
            
            if(strs[0][i]!=strs[n-1][i])
                break ;
            
            ans += strs[0][i] ;
            
        }
        
    return ans ;
    }
};
