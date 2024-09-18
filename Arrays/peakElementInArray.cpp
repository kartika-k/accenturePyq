#include<iostream>
using namespace std;

int findPeak(int arr[], int n){

    if(n == 0)  return -1;
    if(n == 1)  return arr[0];

    // 1st case : asc. array
    if(arr[n-1] > arr[n-2]){
        return arr[n-1];
    }
    // 2nd case: desc. array
    if(arr[0] > arr[1]){
        return arr[0];
    }

    for(int i=1; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << findPeak(arr,n);

    return 0;
}