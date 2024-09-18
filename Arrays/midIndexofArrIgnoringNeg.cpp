#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int size = 0;   //size of pos imaginary array
    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            size++;
        }
    }
    int mid = (size-1)/2;
    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            if(mid == 0){
                return arr[i];
                mid--;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int *arr = new int [n];

    cout << solve(arr,n);

}