class Solution {
public:
    int longestPalindrome(string s) {
        
        int count=0 ;
        
        unordered_map<char, int> mp ;
        
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++ ;
        
        
        bool isOdd = false ;
        
        for(auto i : mp) {
            
            if(i.second%2==0)
                count += i.second ;
            
            if(i.second%2!=0) {
                count += i.second-1 ;
                isOdd=true ;
            }
        }
        
        
        if(isOdd==true)
            return count+1 ;
        
    return count ;
    }
};
