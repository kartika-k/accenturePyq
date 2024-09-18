#include<iostream>
#include<math.h>
using namespace std;

int isPerfectSq(int arr[], int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        int sq = sqrt(arr[i]);
        if(sq*sq == arr[i]){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << isPerfectSq(arr,n);

    return 0;
}