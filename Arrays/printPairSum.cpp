#include<iostream>
#include<unordered_set>
using namespace std;

void pairSum(int arr[], int n, int sum){
    unordered_set<int> st;
    for(int i=0; i<n; i++){
        int temp = sum - arr[i];
        if(st.find(temp) != st.end()){
            cout << "(" << temp << "," << arr[i] << ")" << endl;
        }
        st.insert(arr[i]);
    }
}

int main(){
    int arr[] = {1,5,7,-1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    pairSum(arr,n,sum);
}