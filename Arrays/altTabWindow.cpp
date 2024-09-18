#include<iostream>
using namespace std;

int altTab(int *arr, int n, int k){
    int index = 0;
    // Finding the end index after K presses
    index = k % n;
    // Shifting elements by 1 towards the found index
    // on which the K press ends
    int x = index;
    int id = arr[index];

    while(x > 0){
        int p = x;
        x--;
        arr[p] = arr[x];    //right shift elements present before k
    }
    // Update the current active app
    arr[0] = id;
}

int main(){
    int arr[] = {5, 7, 2, 3, 4, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 10;

    altTab(arr,n,k);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}