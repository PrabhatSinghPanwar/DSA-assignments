// CPP to design platform for maximum stoppage

// https://ide.geeksforgeeks.org/UIJ2DSIAmm			-: visit this site to check and run code 

#include <bits/stdc++.h>
using namespace std;

struct item {
    int a ;
    int d ;
    int s ;
} ;

bool compare(item a, item b) {
    return a.d < b.d ;
}

// function to calculate maximum trains stoppage
int maxStop(int arr[][3], int n, int m)
{
	
	vector<item> v ;
	
	for(int i=0; i<n; i++) {
	    item x ;
	    x.a = arr[i][0] ;
	    x.d = arr[i][1] ;
	    x.s = arr[i][2] ;
	    v.push_back(x) ;
	}
	
	sort(v.begin(), v.end(), compare) ;
	
	int count=0 ;
	int st[m+1] ;
	for(int i=0; i<=m; i++)
	    st[i]=-1 ;
	    
	
	for(int i=0; i<n; i++) {
	    
	    if(st[v[i].s]==-1) {
	        st[v[i].s]=v[i].d ;
	        count++ ;
	    }
	    else {
	        if(v[i].a>=st[v[i].s]) {
	            st[v[i].s]=v[i].d ;
	        count++ ;
	        }
	    }
	}
	
return count ;
}

// driver function
int main()
{
    int m=3 ;
	int arr[m][3] = { 1000, 1030, 1,
					1110, 1130, 1,
					1200, 1220, 1 };
	cout << "Maximum Stopped Trains = "
		<< maxStop(arr, m, 3);
	return 0;
}

