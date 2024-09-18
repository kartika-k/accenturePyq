#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int size) {

    int max_curr = arr[0];
    int max_global = arr[0];

    for(int i=0; i<size; i++){
        max_curr = max(arr[i],max_curr+arr[i]);
        max_global = max(max_global, max_curr);
    }
    return max_global;
}

int main() {
    int arr[] = {-2, 1,-3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Subarray Sum is " << maxSubArraySum(arr, size) << endl;
    return 0;
}