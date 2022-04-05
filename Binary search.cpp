#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout << "Enter the size if array : ";
	cin >> n;
	int a[n],i,low=0,high=n-1,mid,result,q;
	for(i=0;i<n;i++)
		cin >> a[i];
	cout <<"Enter the number you want to search : ";
	cin >> q;
	while(low<=high){
		mid = low+(high-low)/2;
		if(a[mid]==q){
			cout <<"the index is : "<<mid<<endl;
			return 0;
		}
		else if(a[mid]>q){
			high = mid-1;
		}
		else
			low = mid+1;
	}
	cout << "The index is not found"<<endl;
	
}
