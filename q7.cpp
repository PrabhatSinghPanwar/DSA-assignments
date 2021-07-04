class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_set<char> s ;
        int count=0 ;
        
        for(auto i : allowed)
            s.insert(i) ;
        
        for(int i=0; i<words.size(); i++) {
            
            for(int j=0; j<words[i].size(); j++) {
                
                char c = words[i][j] ;
                
                if(s.find(c)==s.end())
                    break ;
                
                if(j==words[i].size()-1)
                    count++ ;
                //cout<<j<<" " ;
            }
            
        }
        
    return count ;
    }
};
