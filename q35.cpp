class Solution {
public:
    int missingNumber(vector<int>& n) {
        
//         sort(n.begin(), n.end()) ;
        
//         int i=0 ;
//         for(i=0; i<n.size(); i++)
//             if(i!=n[i])
//                 return i ;
        
//     return i ;
        
        int m = n.size() ;
        int sumn = (m*(m+1))/2 ;
        
        int sum = accumulate(n.begin(), n.end(), 0) ;
        
        
    return sumn - sum ;    
    }
};
