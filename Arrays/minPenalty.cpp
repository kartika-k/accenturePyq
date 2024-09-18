#include<iostream>
#include<algorithm>
using namespace std;

int minPenalty(int arr[], int n){
    int sum = 0;
    sort(arr,arr+n);

    for(int i=1;i<n;i++){
        sum += abs(arr[i] - arr[i-1]);
    }
    return sum;
}

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << minPenalty(arr,n);

    return 0;
}