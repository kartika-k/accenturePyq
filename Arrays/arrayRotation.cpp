#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[], int n, int d) {
    // Edge case: if array is empty or d is 0, no need to rotate
    if (n == 0 || d == 0) return;

    reverse(arr,arr+n);
    reverse(arr,arr+d);
    reverse(arr+d, arr+n);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 3;

    rotateArray(arr,n,d);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}