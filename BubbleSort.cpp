#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
        cin >>a[i];


    /*main code exist from here*///the code can be copied in programming contest.
    //It will be work for asending order.
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j+1],a[j]);
            }
        }


    for(i=0;i<n;i++)
        cout <<a[i]<<" ";
}
