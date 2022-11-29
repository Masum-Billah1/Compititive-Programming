#include<bits/stdc++.h>
using namespace std;
int a[1000];
int binary_search(int low,int high,int q){
    int mid;
    while(low<=high){
		mid = low+(high-low)/2;
		if(a[mid]==q){
			return mid;
		}
		else if(a[mid]>q){
			high = mid-1;
		}
		else
			low = mid+1;
	}
    return -1;
}
int main(){
	int n;
	cout << "Enter the size if array : ";
	cin >> n;
	int i,low=0,high=n-1,result,q;
	for(i=0;i<n;i++)
		cin >> a[i];
	cout <<"Enter the number you want to search : ";
	cin >> q;
    int temp = binary_search(low,high,q);
    if(temp==-1)
        cout <<"The number is not found"<<endl;
    else
        cout <<"The position of the number is : "<<temp<<endl;
	
}
