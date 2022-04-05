//In solving problem in cf I took help from geeks for geeks.That's why I decided to preserve the code
//Upper Bound using vector.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int ub,i,n,find,temp;
	cin >> n;
	vector<int>v;
	for(i=0;i<n;i++){
		cin >> temp;
		v.push_back(temp);
	}
	cin >> find;
	vector<int>::iterator it;
	it = upper_bound(v.begin(),v.end(),find);
	ub = it-v.begin();
	bool bs;
	bs = binary_search(v.begin(),v.end(),find);
	if(bs == 1){
		cout <<find << " is preesent in vector"<<endl;
		cout <<"The index of "<<find<<" is : "<<ub<<endl;
	}
	else
		cout <<find << " is not preesent in vector"<<endl;
}
