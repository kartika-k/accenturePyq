#include<iostream>
using namespace std;

int findTarget(int arr[], int n, int target){
    int s = 0;
    int e = n-1;

    while(s <= e){
        int mid = e + (s-e)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,3,4,10,40};
    int n = 5;
    int target = 10;

    cout << findTarget(arr,n,target);

    return 0;
}