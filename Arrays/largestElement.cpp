#include<iostream>
#include<algorithm>
using namespace std;

// int findLargest(int arr[], int n){

//     int max = arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

int sortApp(int arr[], int n){

    sort(arr, arr+n);
    return arr[n-1];
}

int main(){

    int arr[] = {8,10,5,7,9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // cout << findLargest(arr,n) << endl;
    cout << sortApp(arr,n) << endl;
    
    return 0;
}