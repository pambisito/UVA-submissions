#include <bits/stdc++.h>
using namespace std;

#define Node pair< int , long long >
#define INF 1<<30

struct cmp {
	bool operator() ( const Node &a , const Node &b ) {
		return a.second > b.second;
	}
};

// u = actual ; v = adyacente ; d = peso
int dijkstra( int S, int T , vector<Node> ady[] , int n ) {
	priority_queue< Node , vector<Node> , cmp > Q;
	
	vector<long long> distance( n + 5 , INF );
	
	bool visited[ n + 5 ];
	for( int i = 0 ; i <= n ; ++i ) { visited[ i ] = false; }
	
	Q.push( Node( S , 0 ) );
	distance[S] = 0 ;
	
	int u, v;
	long long d;
	
	while( !Q.empty() ) {
		u = Q.top().first;
		Q.pop();
		
		if( visited[u] ) { continue; }
		visited[u] = true;
		
		for( int i=0 ; i < int( ady[u].size() ) ; i++ ) {
			v = ady[u][i].first;
			d = ady[u][i].second;
			
			if( !visited[v] && distance[u] + d < distance[v] ) {
				distance[v] = distance[u] + d;
				Q.push( Node( v , distance[v] ) );	
			}
		}
	}
	
	return distance[T];
}

int main(){
	int num_test; cin>>num_test;
	int i=1;
	
	while( num_test-- ) {
		int n, m, S, T;
		cin>>n>>m>>S>>T;
		
		vector<Node> ady[n+5];
		
		while( m-- ) {
			int x, y, w;
			cin>>x>>y>>w;
			ady[x].push_back( Node( y, w ) );
			ady[y].push_back( Node( x, w ) );
		}
		
		long long ans = dijkstra ( S, T, ady, n );
		
		cout<<"Case #"<<i<<": ";
		
		if( ans >= INF ) { cout<<"unreachable\n"; }
		else{ cout<<ans<<endl; }
		i++;
	}
	
	return 0;
}
