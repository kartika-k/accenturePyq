#include<iostream>
using namespace std;

int productSum(int a1[], int a2[], int n){

    int pSum = 0;

    if(n == 0){
        return -1;
    }

    for(int i=0; i<n; i++){
        pSum += a1[i] * a2[n-1-i];
    }
    return pSum;
}

int main(){
    int n = 6;
    int arr1[] = {22,7,1,-5,5,-2};
    int arr2[] = {4,-1,21,12,10,-3};

    cout << productSum(arr1,arr2,n);
}