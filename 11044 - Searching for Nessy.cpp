#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	
	while( T-- ) {
		int n; cin>>n;
		int m; cin>>m;
		
		int q_n = 0, r_n = 0, s_n = 0;
		q_n = ( n - 2 ) / 3; r_n = ( n - 2 ) % 3;		
		if( r_n == 0 ) { s_n = q_n; }
		else{ s_n = q_n + 1; }
				
		int q_m = 0, r_m = 0, s_m = 0;	
		q_m = ( m - 2 ) / 3; r_m = ( m - 2 ) % 3;
		if( r_m == 0 ) { s_m = q_m; }
		else{ s_m = q_m + 1; }		
		
		cout<<s_n*s_m<<endl;
	}
	
	return 0;
}
