#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int j = 1;
	
	while( cin>>n ) {
		if( n != 0 ) {
			int high[n];
			int high_total = 0, high_wall = 0;
			int brick = 0, move = 0;
			
			for( int i = 0 ; i < n ; i++ ) {
			    cin>>high[i];
			    high_total += high[i];
			}
			
			high_wall = high_total / n;
			
			for( int i = 0 ; i < n ; i++ ) {
				if( high[i] > high_wall ) {
					brick = high[i] - high_wall;
					move += brick;
				}
			}
			
			cout<<"Set #"<<j<<endl;
			cout<<"The minimum number of moves is "<<move<<"."<<endl<<endl;
			j++;	
		}
		else{ return 0; }
	}

	return 0;
}
