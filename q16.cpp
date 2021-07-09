class Solution {
public:
    
    //BRUTE FORCE APPROACH ;
    
    int strStr(string haystack, string needle) {
        
        bool flag = true ;
        
        if(needle.size()==0)
            return 0 ;
        
        if(needle.size()>haystack.size())
            return -1 ;
        
        
        int i=0 ;
        for(i=0; i<=haystack.size()-needle.size(); i++) {
            flag=true ;
            for(int j=0; j<needle.size(); j++) {
                
                if(haystack[i+j]!=needle[j]) {
                    flag=false ; 
                }
            // cout<<i ;
            }
            
            if(flag==true)
               break ;
        }
        
        if(flag==false)
            return -1 ;
        
    return i ;
    }
};
