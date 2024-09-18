#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n) {
    int totalSum, leftSum;
    totalSum = 0;
    leftSum = 0;

    for(int i=0; i<n; i++){
        totalSum += arr[i];
    }
    for(int i=0; i<n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            // return i+1; //for 1 based indexing
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}
int main() {
    int n = 6;
    int arr[] = {1,7,3,6,5,6};
    cout << findEquilibrium(arr, n) <<endl;
    return 0;
}