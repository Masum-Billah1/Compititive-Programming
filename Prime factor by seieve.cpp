#include<bits/stdc++.h>
#define max 1000001
using namespace std;
int spf[max];
void seieve(){
	int i,j;
	for(i=1;i<max;i++){
		spf[i]=i;
	}
	for(i=2;i*i<max;i++){
		for(j=2;i*j<max;j++){
			if(spf[i*j]==i*j)
				spf[i*j]=i;
		}
	}
}
int main(){
	int n,i;
	cin >> n;
	seieve();
	vector<int>v;
	while(n!=1){
		v.push_back(spf[n]);
			n=n/spf[n];
	}
	for(i=0;i<v.size();i++)
		cout <<v[i]<<" ";
}
