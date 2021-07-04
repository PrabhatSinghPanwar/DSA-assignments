class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int> ans ;
        
        map<int, vector<int > > mp ;
        
        for(int i : arr) {
            
            int bit = __builtin_popcount(i) ;
            mp[bit].push_back(i) ;
        }
        
        
        
        for(auto i : mp) {
            
            vector<int> temp = i.second ;
            
            sort(temp.begin(), temp.end()) ;
            
            for(int j : temp)
                ans.push_back(j) ;
            
        }
        
        
    return ans ;
    }
};
