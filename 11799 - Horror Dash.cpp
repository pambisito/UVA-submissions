#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	int i = 1;
	
	while( T-- ) {
		int N; cin>>N;
		int max = 0;
		int c;
		
		for( int i = 1 ; i <= N ; i++ ) {
			cin>>c;
			if( c > max ) { max = c; }
		}
		
		cout<<"Case "<<i++<<": "<<max<<endl;
	}
	
	return 0;
}
