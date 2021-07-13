class Solution {
public:
    bool isPowerOfTwo(int n) {
     
    //this method uses recursion and TC is O(log n) :
        if(n==0)
            return false;
  
        if(n==0 || n%2==1)
            return false ;
        
    return isPowerOfTwo(n/2) ;
    
    //this method is by using bit manupulation and TC is O(1) :
    
    //     if( (n & n-1) == 0 )
    //         return true ;
    // return false ;
    }
};
