#include <bits/stdc++.h>
using namespace std;

int main(){
	int K;
	while( cin>>K ) {	
		if( K == 0 ) { return 0; }
		
		int a; cin>>a; 
		int b; cin>>b;
		
		int x, y;
		
		for( int i = 1 ; i <= K ; i++ ) {
			cin>>x; cin>>y;
			
			if( (x-a) > 0 && (y-b) > 0 ){ cout<<"NE"<<endl; }
			else if( (x-a) < 0 && (y-b) > 0 ){ cout<<"NO"<<endl; }
			else if( (x-a) > 0 && (y-b) < 0) { cout<<"SE"<<endl; }
			else if( (x-a) < 0 && (y-b) < 0 ){ cout<<"SO"<<endl; }
			else{ cout<<"divisa"<<endl; }	
		}	
	}
	
	return 0;
}
