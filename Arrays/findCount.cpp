#include<iostream>
using namespace std;

int findCount(int arr[], int n, int num, int diff){
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(abs(arr[i] - num) <= diff){
            cnt++;
        }
    }
    return cnt > 0 ? cnt : -1;
}

int main(){
    int arr[] = {12,3,14,56,77,13};
    int n =6;
    int num = 13;
    int diff = 2;

    cout << findCount(arr,n,num,diff);
}