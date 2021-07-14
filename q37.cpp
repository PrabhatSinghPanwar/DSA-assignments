class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string> ans ;
        
        
        for(int i=0; i<12; i++) {
            bitset<4> hr(i) ;
            
            for(int j=0; j<60; j++) {
                bitset<6> min(j) ;
                
                if(min.count() + hr.count() == turnedOn ) {
                    
                    string a1 = to_string(i) ;
                    string a2 = (j>9) ? ":" : ":0" ;
                    
                    string a3 = a2+to_string(j) ;
                    
                    ans.push_back(a1+a3) ; 
                }
            }
        }
    return ans ; 
    }
};
