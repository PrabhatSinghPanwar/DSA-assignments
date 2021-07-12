class Solution {
public:
    string mostCommonWord(string p, vector<string>& ban) {
        
        unordered_set<string> b(ban.begin(), ban.end()) ;
        unordered_map<string, int> mp ;
        
        for(int i=0; i<p.size(); i++) {
            if(!isalpha(p[i]))
                p[i] = ' ' ;
            else
                p[i] = tolower(p[i]) ;
        }
        
        string w ;
        stringstream str(p) ;
        
        while(str>>w)
        {
            if(b.find(w)==b.end()) {
                mp[w]++ ;
            }
                
        }
        
        // for(auto i:mp)
        //     cout<<i.first<<i.second<<endl; 
        
        string ans="" ;
        int max = INT_MIN ;
        for(auto i : mp) {
            if(i.second>max) {
                max=i.second ;
                ans = i.first ;
            }
        }
        
    return ans ;
    }
};
