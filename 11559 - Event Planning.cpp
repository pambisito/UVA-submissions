#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, B, H, W; 
	
	while( cin>>N>>B>>H>>W ) {	
		int p; 
		int a; 
		int min = 100000;
		
		for( int i = 1 ; i <= H ; i++ ) {
			cin>>p;
				
			for( int j = 1 ; j <= W ; j++ ) {
				cin>>a;	
				if( a >= N && p < min ) { min = p; }	
			}
		}
		
		if( min * N <= B ) { cout<<min * N<<endl; }
		else{ cout<<"stay home"<<endl; }
	}
				 
    return 0;
}
