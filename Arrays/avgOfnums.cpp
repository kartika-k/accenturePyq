#include<iostream>
using namespace std;

float avgOfPosNums(int arr[], int n){
    int sum = 0;
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            sum += arr[i];
            cnt++;
        }
    }
    return (cnt > 0) ? (float)sum/cnt : -1;
}

int main(){
    int arr[] = {5,2,-4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << avgOfPosNums(arr,n) << " ";

    return 0;
}