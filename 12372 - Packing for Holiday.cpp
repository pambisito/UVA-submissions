#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int i = 1;
	while( n-- ) {
		int L; cin>>L;
		int W; cin>>W;
		int H; cin>>H;
		
		cout<<"Case "<<i<<": ";
		if( L <= 20 && W <= 20 && H <= 20 ) { cout<<"good"<<endl; }
		else{ cout<<"bad"<<endl; }	
		i++;
	}	
	
	return 0;
}
