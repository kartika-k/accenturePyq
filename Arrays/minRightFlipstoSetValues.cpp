#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(cnt % 2 == 0){
            if(arr[i] == 0) cnt++;
        }else{
            if(arr[i] == 1) cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    // int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << solve(arr,n);

}