#include<bits/stdc++.h>
using namespace std ;


struct too {
	int f ;
	int t ;
} ;


bool compare(too a, too b) {
	if(a.f==b.f)
		return a.t > b.t ;
		
	return a.f < b.f ;
}



int sol(vector<too> v) {
	
	sort(v.begin(), v.end(), compare) ;
	
// 	for(auto i : v)
// 	  cout<<i.f<<" "<<i.t<<endl ;

  vector<pair<int, int> > temp ;

  if(v[0].f!=0)
    return -1 ;
  
  int maxe = v[v.size()-1].t ;
  
  int s=v[0].f, e=v[0].t, count=1 ;
  temp.push_back(make_pair(s, e)) ;
  
  for(auto i=1; i<v.size(); i++) {
    
    if(e>=v[i].f && v[i].t>e) {
      s=v[i].f ;
      e=v[i].t ;
      
      temp.push_back(make_pair(s, e)) ;
      
      count++ ;
    }
    
  }
  
  // cout<<v[v.size()-1].t<<" "<<temp[temp.size()-1].second<<endl ;
  
  if(temp[temp.size()-1].second != e)
    return -1 ;
  
  
  // for(auto i : temp)
  //   cout<<"->"<<i.first<<" "<<i.second<<endl ;

  
  int arr[e+1] = {0} ;
  
  for(auto i : temp) {
    
    int s1 = i.first ;
    int s2 = i.second ;
    
    for(int i=s1; i<=s2; i++)
      arr[i]++ ;
    
  }
  
  int sum=0 ;
  for(int i=0; i<e+1; i++) 
    sum += arr[i] ;
  
	cout<<"The no. of workers in this work are : "<<sum<<endl ;
	
return count ;
}


int main()
{
	
	vector<too> v ;
	
	int n ;
// 	cout<<"enter the size of the bridge : " ;
	cin>> n ;
	
	
// 	cout<<"now enter the pairs : " ;
	for(int i=0; i<n; i++) {
		too z ;
		
		int x, y ;
		cin>>x>>y ;
		z.f = x ;
		z.t = y ;
		v.push_back(z) ;
	}
	
	int ans = sol(v) ;
	
	cout<<"The minimum number of pairs needed for this work : "<<ans ;
	
}
