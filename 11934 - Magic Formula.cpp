#include <bits/stdc++.h>
using namespace std;

int main () {	
	int a, b, c, d, L;
	
	while( cin>>a>>b>>c>>d>>L ) {
		int funcion;
		int count = 0;
		
		if( a == 0 && b == 0 && c == 0 && d == 0 && L == 0 ) { return 0; }
		
		for( int x = 0 ; x <=L ; x++ ) {
			funcion = a*x*x + b*x + c;
			
			if( funcion % d == 0 ) { count++; }
		}
		
		cout<<count<<endl;
	}
		
	return 0;
}
