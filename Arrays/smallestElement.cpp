// Problem Statement: Given an array, we have to find the smallest element in the array.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int sortApp(vector<int>& arr){   // Passing by reference
//         
//     sort(arr.begin(), arr.end());   // Sorting the original vector

//     return arr[0];  // Returning the smallest element
// }

// Solution2: Using a min variable

int findSmallest(vector<int>& arr){
    int small = arr[0];
    int n = arr.size(); 

    for(int i=0; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    // cout << sortApp(arr1) << endl;
    // cout << sortApp(arr2) << endl;

    cout << findSmallest(arr1) << endl;
    cout << findSmallest(arr2) << endl;

    return 0;
}