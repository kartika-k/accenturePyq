#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int element = 3;
    bool found = false;

    for(int i=0; i<n; i++){
        if(arr[i] == element){
            cout << "True";
            found = true;
        }
    }
    if(!found){
        cout << "False";
    }

    return 0;
}