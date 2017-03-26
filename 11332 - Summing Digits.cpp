#include <bits/stdc++.h>
using namespace std;

int suma_cifras( int x ) {
	int suma = 0;
	while( x != 0 ) {
		suma += x % 10;
		x/=10;
	}
	return suma;
}

int main(){
	int n;
	
	while( cin>>n ) {
		if( n == 0 ) { return 0; }
		
		while( n > 9 ) { n = suma_cifras(n); }
		cout<<n<<endl;
	}
    
	return 0;
}
