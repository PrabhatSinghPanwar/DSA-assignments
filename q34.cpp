class Solution {
public:
    bool isPowerOfFour(int n) {
       
        // this method is of TC O(log n) :
        
        if(n==1)
            return true ;
        
        if(n==0 || n%4 != 0)
            return false ;
        
    return isPowerOfFour(n/4) ;
    
        
        //this method is of TC O(1) :
//         if(n==1)
//             return true ;
        
//         if(n%4==0)
//             return (n & n-1)==0 && (n%10==4 || n%10==6) ;
        
//     return false ;
    }
};
