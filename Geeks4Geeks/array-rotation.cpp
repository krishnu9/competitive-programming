#include<bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void leftRotate(int arr[], int d, int n){
    while(d--){
        leftRotatebyOne(arr,n);
    }
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int d = 3;

    leftRotate(arr, d, n);

    for(int i: arr){
        cout<<i<<'\t';
    }
    cout<<endl;

    return 0;
}