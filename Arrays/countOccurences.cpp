#include<iostream>
using namespace std;

int cntOcc(int arr[], int n,int element){

    int cnt = 0;
    int i=0;

    while(i<n){
        if(arr[i] == element){
            cnt++;
        }
        i++;
    }
    return cnt;
}

int main(){
    int arr[] = {5,2,4,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 2;

    cout << cntOcc(arr,n,element) << " ";

    return 0;

}