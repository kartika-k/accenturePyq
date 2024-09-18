#include <iostream>
#include <algorithm>
using namespace std;

int findMissing(int arr[], int n){
    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        if(arr[i] != i){
            return i;
        }
    }
    return n;   //corner case: if all elements from 0 to n-1 are present
}

int main(){
    int arr[] = {4, 3, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findMissing(arr, n);

    return 0;
}
