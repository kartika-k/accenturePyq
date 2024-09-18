#include<iostream>
using namespace std;

void findPairSum(int arr[], int n, int sum){

    bool pairFound = false;

    for(int i=0; i<n; i++){
        for(int j=1; j<n-1; j++){
            if(arr[i] + arr[j] == sum){
                cout << arr[i] << "," << arr[j];
                pairFound = true;
            }
        }
    }
    if(pairFound == false){
        cout << -1;
    }
}

int main(){
    int arr[] = {5,2,4,1,3};
    int n = 5;
    int sum = 9;

    findPairSum(arr,n,sum);

    return 0;
}