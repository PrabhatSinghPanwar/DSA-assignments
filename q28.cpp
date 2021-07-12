class Solution {
public:
    string reformatDate(string date) {
        
        unordered_map<string, string> mp ;
        
        mp["Jan"] = "01" ;
        mp["Feb"] = "02" ;
        mp["Mar"] = "03" ;
        mp["Apr"] = "04" ;
        mp["May"] = "05" ;
        mp["Jun"] = "06" ;
        mp["Jul"] = "07" ;
        mp["Aug"] = "08" ;
        mp["Sep"] = "09" ;
        mp["Oct"] = "10" ;
        mp["Nov"] = "11" ;
        mp["Dec"] = "12" ;
        
        
        stringstream ss(date), ans;
        
        
        int day, year;
        
        string str;
        ss >> day >> str >> str >> year;
        ans << year << "-" << mp[str] << "-" << (day < 10 ? "0" : "") << day;

        
    return ans.str() ;
    }
};
