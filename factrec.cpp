#include<bits/stdc++.h>
using namespace std;
int fact(int num){
	if(num){
		return (num*fact(num-1));
	}
	else
		return 1;
}
int main(){
	int n;
	cin >> n;
	cout << fact(n)<<endl;
}
