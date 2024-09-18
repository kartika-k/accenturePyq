#include<iostream>
using namespace std;

int minMaxIn2Arr(int arr1[], int arr2[], int n1, int n2, int k){
    int maxCount = 0, minCount = 0;

    for(int i=0; i<n1; i++){
        if(arr1[i] > k){
            maxCount++;
        }
    }
    for(int i=0; i<n2; i++){
        if(arr2[i] < k){
            minCount++;
        }
    }
    int res = max(maxCount, minCount);

    return res;
}

int main(){
    int arr1[] = {9,16,12,5,15};
    int arr2[] = {14,7,22,5,32,77};
    int k = 9;
    int n1 = 5;
    int n2 = 6;

    cout << minMaxIn2Arr(arr1,arr2,n1,n2,k);

    return 0;

}