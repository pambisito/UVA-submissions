#include <bits/stdc++.h>
using namespace std;

int main () {
	int T; scanf("%d", &T);
	
	while( T-- ) {
		int n; scanf("%d", &n);
		int p[n];
		
		for( int i = 0 ; i < n ; i++ ) { scanf( "%d", &p[i] ); }
		
		sort( p, p + n );
		
		printf( "%d\n" , 2 * ( p[n-1] - p[0] ) );
		
	}
		
	return 0;
}
