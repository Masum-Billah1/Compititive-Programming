#include<bits/stdc++.h>
using namespace std;
int mat[100][100],color[100];
int node,edge,i,j;

void dfs(int x){
	color[x]=1;
	for(i=0;i<node;i++){
		if(mat[x][i]==1 && color[i]==0){
			dfs(i);
		}
	}
	color[x]=2;
}

int main() {
    freopen("input.txt", "r", stdin);
    
    int x,y,sum=0;
	cin >> node;
	cin >> edge;
	for(i=0;i<edge;i++){
		cin >> x;
		cin >> y;
		mat[x][y]=1;
		mat[y][x]=1;
	}
	for(i=0;i<node;i++)
		color[i]=0;
	for(j=0;j<node;j++){
		if(color[i]==0)
			dfs(j);
	}
	
	for(i=0;i<node;i++){
		if(color[i]!=0)
			sum++;
	}
	if(sum == node)
		cout <<"All the nodes are visited"<<endl;
	else
		cout <<"All the nodes are not visited"<<endl;
}
