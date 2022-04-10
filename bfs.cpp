#define  fin    freopen("input.txt","r",stdin)
#include<bits/stdc++.h>
using namespace std;
int node,edge,i;
int adj[100][100];
int parent[100];
int visit[100];
int distant[100];

void bfs(int source){
	for(i=0;i < node;i++){
		visit[i] = 0;
		distant[i] = 0;
		parent[i] = -1;
	}
	parent[source] = -1;
	distant[source] = 0; 
	queue <int> q;
	q.push(source);
	while(!q.empty()){
		int x;
		x = q.front();
		q.pop();
		visit[x] = 1;
		for(i=0;i<node;i++){
			if(adj[x][i]==1 && visit[i]==0){
				distant[i] = distant[i] + 1;
				parent[i] = x;
				q.push(i); 
			}
		}
		visit[x] = 2;
	}
}
int main(){
	fin;
	cin >> node >> edge;
	int u,v;
	for(i=0;i < edge;i++){
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][v] = 1;
	}
	bfs(0);
	for(i=0;i<node;i++){
		if(visit[i]==0)
			break;
	}
	if(i==node)
		cout << "All the nodes are visited"<<endl;
	else
		cout <<"All the nodes are not visited"<<endl;
}


