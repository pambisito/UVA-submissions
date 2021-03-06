#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int bigmod( ull a, ull p, ull m ) {
      if( p == 0 ) return 1;
      if( p % 2 == 0 ) {
        int c = bigmod( a, p/2, m );
        return c * c % m;
      }
      else return ( a * bigmod( a, p-1, m ) ) % m;
}

int main(){
	ull B;
	while( cin>>B ) {
        ull P, M;
        cin>>P>>M;
        cout<<bigmod(B,P,M)<<endl;
	}

	return 0;
}
