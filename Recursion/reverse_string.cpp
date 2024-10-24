#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    if(str.size()==0)
        return "";
    else
        return reverse(str.substr(1))+str[0];
}
int main(){
    string str ="Masum";
    cout <<"Reverse is: "<<reverse(str)<<endl;
}