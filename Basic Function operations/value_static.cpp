#include<bits/stdc++.h>
using namespace std;

int change(int &a,int &b){
    a = a+2;
    b = b+2;
    return b;
}
int main(){
    int a = 5, b = 10;
    change(a,b);
    cout << a <<" "<< b << endl;
}

// There is no effect of changing main function value due to changing value of another function.