class Solution {
public:
    
    int setbits(int i) {
        
        int count = 0 ;
        
        while(i)
        {
            i = (i & i-1) ;
            count++ ;
        }
        
    return count ;
    }
    
    
    
    vector<int> countBits(int n) {
        
        vector<int> ans ;
        
        for(int i=0; i<=n; i++) {
            int x = setbits(i) ;
            ans.push_back(x) ;  
        }
        
    return ans ;
    }
};
