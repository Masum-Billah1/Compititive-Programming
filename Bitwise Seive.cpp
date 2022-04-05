#include<bits/stdc++.h>
using namespace std;
unsigned int a[100000000/32];
Bitwise_seieve(int n){
	int div,mod,i,j,temp,c=0;
	bool b;
	for(i=0;i<=n;i++){
		div = i/32;
		mod = i%32;
		a[div] = a[div]|(1 << mod);
	}

	for(i=2;i<=(int)sqrt(n);i++){
		for(j=2;i*j<=n;j++){
			temp = i*j;
			div = temp/32;
			mod = temp%32;
			b = a[div] & (1 << mod);
			if(b == 1){
				a[div] = a[div]-(1 << mod);
			}
		}
	}
	for(i=2;i<n;i++){
		div = i/32;
		mod = i%32;
		bool b = a[div] &(1 << mod);
		if(b == 1){
		//	cout << i << " ";
			c++;
		}
	}
	return c;
}
int main(){
	int n;
	cout <<"Calculate Prime number upto: ";
	cin >> n;
	cout <<endl<<"The number of prime number from 1 upto "<< n <<" is : "<<Bitwise_seieve(n)<<endl;
}
