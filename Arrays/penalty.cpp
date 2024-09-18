#include<iostream>
#include<algorithm>
using namespace std;

int penalty(int arr[], int n){
    sort(arr,arr+n);
    int ans = 0;

    for(int i=1; i<n; i++){
        ans = ans + (arr[i] - arr[i-1]);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << penalty(a,n);
}