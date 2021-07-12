class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int> pos ;
        vector<int> ans ;
        
        for(int i=0; i<s.size(); i++)
            if(s[i]==c)
                pos.push_back(i) ;
        
        for(int i=0; i<s.size(); i++) {
            
            if(s[i]==c)
                ans.push_back(0) ;
            
            else
            {
                int a=INT_MAX ;
                for(int j=0; j<pos.size(); j++) {
                    a = min(a, abs(pos[j]-i)) ;
                }
                
                ans.push_back(a) ;
            }
            
        }
        
        
    return ans ;
    }
};
