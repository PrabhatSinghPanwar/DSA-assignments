class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int l1 = ransomNote.size() ;
        int l2 = magazine.size() ;
        
        if(l1>l2)
            return false ;
        
        for(int i=0; i<l1; i++) {
            
            bool flag=false ;
            
            for(int j=0; j<l2; j++) {
                
                if(ransomNote[i]==magazine[j]) {
                    magazine[j] = '1' ;
                    flag = true ;
                    break ;
                }
                
            }
            
            if(flag==false)
                return false ;
        }
        
        
    return true ;
    }
};
