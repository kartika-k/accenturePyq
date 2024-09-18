#include<iostream>
using namespace std;

int maxProfit(int arr[], int n){
    if(n < 2){
        return 0;
    }
    int buy1 = arr[0];
    int sell1 = arr[0];
    int buy2 = arr[0];
    int sell2 = arr[0];

    for(int i=0; i<n; i++){
        buy1 = min(buy1, arr[i]);
        sell1 = max(sell1, arr[i] - buy1);
        buy2 = min(buy2 , arr[i]-sell1);
        sell2 = max(sell2, arr[i]-buy2);
    }
    return sell2;
}

int main(){
    int n;
    cin >> n;

    int arr[n] = {2,30,15,10,8,25,80};

    cout << maxProfit(arr,n);

    return 0;
}