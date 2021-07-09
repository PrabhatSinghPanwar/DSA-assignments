class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string ans ;
        
        
        int i=num1.size()-1 ;
        int j=num2.size()-1 ;
        
        int carry = 0 ; 
        
        
        while(j>=0 || i>=0)
        {
            
            int sum = carry ;
            
            if(i>=0) sum += num1[i--] - '0' ;
            if(j>=0) sum += num2[j--] - '0' ;
            
            if(sum>9)
                carry=1 ;
            else
                carry=0 ;
            
            ans += to_string(sum%10) ;
            
        }
        if(carry)
            ans += to_string(carry) ;
        
        reverse(ans.begin(), ans.end()) ;
        
    //cout<<ans ;
    return ans ;
    }
};
