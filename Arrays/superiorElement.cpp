#include <iostream>
#include <limits.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     if (n == 0) {
//         cout << 0;
//         return 0;
//     }

//     int* arr = new int[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int count = 0;
//     int sup = INT_MIN;

//     for (int i = n - 1; i >= 0; i--) {
//         if (arr[i] > sup) {
//             count++;
//             sup = arr[i];
//         }
//     }
//     cout << count;

//     delete[] arr; // Freeing the dynamically allocated memory

//     return 0;
// }

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    int sup = INT_MIN;

    for(int i=n-1; i>=0; i--){
        if(arr[i] > sup){
            cnt++;
            sup = arr[i];
        }
    }
    cout<< cnt;
}

// #include <iostream>
// #include<limits.h>
// #include<bits/stdc++.h>
// using namespace std;

// int superiorElemCnt(int n, int arr[]){
//     int sup = INT_MIN;
//     int ans = 0;

//     for(int i=n-1; i>=0; i--){
//         if(arr[i] > sup){
//             sup = arr[i];
//             ans++;
//         }
//     }
//     return ans;
// }


// int main() {
//     int n;
//     cin >> n;

//     // int *arr = new int[n];
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int ans = superiorElemCnt(n,arr);
//     cout << ans;
    
//     return 0;
// }