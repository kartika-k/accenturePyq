#include<iostream>
using namespace std;

int houseClimb(int arr[], int n){
    if(n == 0){
        return 0;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0 && arr[i] % 3 == 0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    int arr[] = {12,21,3,4};

    cout << houseClimb(arr,n);

    return 0;
}