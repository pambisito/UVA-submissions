#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	while( T-- ) {
		int G; cin>>G;
		int L; cin>>L;
		
		if( L % G == 0 ) { cout<<G<<" "<<L<<endl; }
		else{ cout<<"-1"<<endl; }	
	}
	
	return 0;
}
