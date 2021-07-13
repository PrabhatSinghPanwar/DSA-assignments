class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count=0 ;
        
        while(n)
        {
            n = n & (n-1) ;
            count++ ;
        }
        
    return count ;
    }
};

// this is a builtin fuction which will return the number of fixed bits instantly ;

//  return __builtin_popcount(n) ;
