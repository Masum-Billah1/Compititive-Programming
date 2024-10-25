#include<bits/stdc++.h>
using namespace std;

int  change(vector<int> & a,vector<int> & b){
    a[0] = a[0]+2;
    b[0] = b[0]+2;
    return b.size();
}
int main(){
    vector<int> a = {10,5};
    vector<int> b = {15,20};
    int c = change(a,b);

    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }cout << endl;

    for(int i=0;i<b.size();i++){
        cout << b[i]<<" ";
    }cout << endl;
}
//In vector, value of main function is changed for changing the value of another function.