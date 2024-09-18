#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[], int n){
    int min = INT_MAX;
    int index;

    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    cout << min << " " << index;
}

int main(){
    int arr[] = {5,2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    findMin(arr,n);

    return 0;
}