#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	
	while( cin>>a>>b ) {
		if( a == -1 && b == -1 ) return 0;
		
		int m = abs( a - b );
		int n = 100 - m;
		
		if( m > n ) { cout<<n<<endl; }
		else{ cout<<m<<endl; }
	}
	
	return 0;
}
