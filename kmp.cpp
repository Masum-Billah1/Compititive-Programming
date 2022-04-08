//how many number of pattern exist in text
//Solving the problem using KMP algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
	string text,pattern;
	cin >> text >>pattern;
	int sz,i=1,j=0,temp,cnt=0;
	sz = pattern.size();
	int lps[sz]={0};
	while(i<sz){
		if(pattern[j]==pattern[i]){
			lps[i]=j+1;
			j++;i++;
		}
		else if(j==0)
			i++;
		else{
			temp = max(0,j-1);
			j = lps[temp];
		}
	}
	cout<<""
	for(int k=0;k<sz;k++)
		cout <<lps[k]<<" ";
	cout << endl;
	i = j = 0;
	while(i<text.size()){
		if(text[i]==pattern[j]){
			i++;j++;
			if(j == sz){
				cnt++;
				j--;
			}
		}
		else if(j==0)
			i++;
		else{
			temp = max(0,j-1);
			j = lps[temp];
		}
	}
	cout << "There are "<<cnt<<" Subset in the text" << endl;
}
