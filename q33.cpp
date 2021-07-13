

#include<bits/stdc++.h>
using namespace std;


int main(){
  
  float n = 45342.66 ;
  int b = 3 ;
  
  string s = to_string(n) ;
  string d1, d2 ;
  
  d1=s.substr(0, s.find('.')) ;
  d2=s.substr(s.find('.')+1) ;
  
  // cout<<d1<<" "<<d2 ;
  
  float s2=0, k=0 ; 
  int s1=0 ;
  
  for(int i=d1.size()-1; i>=0; i--)
    s1 += (pow(b,k++) * (d1[i]-'0')) ;
    
  for(int i=1; i<=d2.size(); i++)
    s2 += (pow(b,-i) * (d2[i]-'0')) ;
    
  cout<<to_string(s1+s2) ;
  
}
