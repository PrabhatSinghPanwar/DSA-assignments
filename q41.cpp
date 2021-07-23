// CPP program to find maximum number of stocks that
// can be bought with given constraints.


//	https://ide.geeksforgeeks.org/tfP0POiLc7					-: for running test cases visit this site ;


#include <bits/stdc++.h>
using namespace std;

// Return the maximum stocks
int buyMaximumProducts(int n, int k, int price[])
{
	vector<pair<int, int> > v;

	for (int i = 0; i < n; ++i)
		v.push_back(make_pair(price[i], i + 1));	


	sort(v.begin(), v.end());	

	
	
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if(v[i].first*v[i].second <= k) {
		    k -= v[i].first*v[i].second ;
		    ans += v[i].second ;
		}
		else if(k>=v[i].first) {
		    for(int j=1; j<v[i].second; j++) {
		        k -= v[i].first ;
		        if(k<0)
		            break ;
		        ans++ ;
		    }
		break ;
		}
	}

	return ans;
}

// Driven Program
int main()
{
	int price[] = { 10, 7, 4 };
	int n = sizeof(price)/sizeof(price[0]);
	int k = 100;

	cout << buyMaximumProducts(n, k, price) << endl;

	return 0;
}

