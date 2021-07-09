class Solution {
public:
    int lengthOfLastWord(string s){
        int count=0;
        int countn=0;
        int i;
        int n=s.length();
        if (s.empty()==true)
            return 0;
        if ( s[n-1]==' ')
        {
            for(int j=n-1;j>=0;j--)
             {
                if (s[j]==' ')
                    countn++;
                else
                    break;
             }
         }
        int m=n-countn-1;
     
        for(i=m;i>=0;i--)
        {
            if(s[i]!=' ')
                count++;
            else if( s[i]==' ')
                return count;
            else if( i==-1)
                return count;
        }
        return count;
    }
};
