#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &a, int low, int high){
    int pivot = a[high];
    
    int i = low;
    for(int j=low;j<=high;j++){
        if(a[j]<pivot){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[high]);
    return i;
}

void quicksort(vector<int> &a, int low, int high){
    if(low < high){
        int pi = partition(a,low,high);

        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}

int main(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quicksort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout << arr[i]<<" ";
    }
}