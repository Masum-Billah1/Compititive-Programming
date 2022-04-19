#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int gcd;
	if(a>b)
		swap(a,b);
	gcd=a;
	while(b%a!=0){
		gcd = b%a;
		b=a;
		a = gcd;
	}
	return gcd;
}
int main(){
	int a,b,grcd;
	cin >> a >> b;
	grcd = gcd(a,b);
	cout << grcd <<endl;
}
