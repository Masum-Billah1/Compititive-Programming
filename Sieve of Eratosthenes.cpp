//The programme returns the prime number from 1 to n.
#include<bits/stdc++.h>
using namespace std;
void seieve(int n){
	int i,j;
	int a[n]={0};
    for(i=2;i*i<n;i++){
        for(j=2;i*j<n;j++)
            a[i*j]=1;
    }
    for(i=2;i<n;i++){
    	if(a[i]==0){
    		cout <<i<<" ";
		 }
	 }      
}
int main(){
    int n,i,j;
    cout <<"Enter the the number : ";
    cin >>n;
    seieve(n);
}
