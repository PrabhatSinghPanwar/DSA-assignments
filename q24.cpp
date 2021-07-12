class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        vector<string> ans ;
        
        string o1 = "qwertyuiop" ;
        string o2 = "asdfghjkl" ;
        string o3 = "zxcvbnm" ;
        
        
        unordered_set<char> one(o1.begin(), o1.end()) ;
        unordered_set<char> two(o2.begin(), o2.end()) ;
        unordered_set<char> three(o3.begin(), o3.end()) ;
        
       //level 1st 
        for(int i=0; i<words.size(); i++) {
            bool flag=true ;
            for(int j=0; j<words[i].size(); j++) {
             
                if(one.find(tolower(words[i][j]))==one.end()) {
                    flag=false ;
                    break ;
                }
                
            }  
            if(flag==true)
                ans.push_back(words[i]) ;
        }
        
        //level 2nd
        for(int i=0; i<words.size(); i++) {
            bool flag=true ;
            for(int j=0; j<words[i].size(); j++) {
             
                if(two.find(tolower(words[i][j]))==two.end()) {
                    flag=false ;
                    break ;
                }
                
            }  
            if(flag==true)
                ans.push_back(words[i]) ;
        }
        
        //level 3rd
        for(int i=0; i<words.size(); i++) {
            bool flag=true ;
            for(int j=0; j<words[i].size(); j++) {
             // cout<<words[i][j] ;
                if(three.find(tolower(words[i][j]))==three.end()) {
                    flag=false ;
                    break ;
                }
                
            }  
            if(flag==true)
                ans.push_back(words[i]) ;
        }
        
    return ans ;
    }
};
