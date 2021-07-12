class Solution {
public:
    string thousandSeparator(int n) {
        
        string s, ans ;
        s = to_string(n) ;
        
        int x=0 ;
        for(int i=s.size()-1; i>=0; i--) {
            
            if(x==3) {
                ans = '.'+ans ;
                x=0 ;
            }
            x++ ;
            // cout<<x ;
            ans = s[i]+ans ;
        }
      
    return ans ;
    }
};
