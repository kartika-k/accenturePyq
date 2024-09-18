#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

int solve(int arr[], int n){
    sort(arr,arr+n);

    int mid_diff = INT_MAX;

    for(int i=0; i<n; i++){
        int diff = arr[i] - arr[i-1];
        if(diff < mid_diff){
            mid_diff = diff;
        }
    }
    return mid_diff;
}

int main(){
    int arr[] = {10,4,12,3,1};
    int n = 5;

    cout << solve;

    return 0;
}