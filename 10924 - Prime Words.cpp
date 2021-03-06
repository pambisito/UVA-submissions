#include <bits/stdc++.h>
using namespace std;

bool primo( int suma ){
	
	if( suma == 2 ){ return true; }
	else if( !(suma&1) ){ return false; }
	int i = 3;
	for( ; i*i <= suma ; i += 2 ) {
		if( suma % i == 0 ) { return false; }
	}
	return true;
}

int main(){
	string s;
	
	while( cin>>s ) {
		int suma = 0;
		for( int i = 0 ; i < (int)s.size() ; i++ ) {
			if( s[i] >= 'a' && s[i] <= 'z' ) { suma += s[i] - 'a' + 1; }
			else{ suma += s[i] - 'A' + 27; }
		}
		
		if( primo(suma) ) { cout<<"It is a prime word."<<endl; }
		else{ cout<<"It is not a prime word."<<endl; }
	}
	
	return 0;
}
