#include<iostream>
using namespace std;

int sumOfLeaders(int n, int arr[]){
    int maxi = arr[n-1];
    int sum = arr[n-1];

    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxi){
            maxi = arr[i];
            sum += maxi;
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    // int arr[n];
    int *arr = new int[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << sumOfLeaders(n,arr);

    return 0;
}