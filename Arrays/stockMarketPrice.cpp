#include<iostream>
using namespace std;

int negativeGrowth(int arr[], int n){
    if(n == 0 || n == 1){
        return 0;
    }
    int cnt = 0;

    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    int arr[] = {5,6,4,5,2,3,40};

    cout << negativeGrowth(arr,n);

}