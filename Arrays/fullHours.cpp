#include<iostream>
#include<unordered_map>
using namespace std;

// int fullHours(int arr[], int n){
//     int count = 0;
//     int mod = 10e9 + 7;

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             int temp = (arr[i] % 60) + (arr[j] % 60);
//             if(temp % 60 == 0){
//                 count++;
//                 count = count % mod;
//             }
//         }
//     }
//     return count;
// }

// optimized approach
int fullHours(int arr[], int n){
    int ans = 0;
    int mod = 10e9 + 7;
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++){
        int A = arr[i] % 60;
        int B = (60 - A);

        if(mp.find(B) != mp.end()){
            int cnt = mp[B];
            ans = (ans + cnt) % mod;
        }
        mp[A]++;
    }
    return ans;
}


int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << fullHours(arr,n);

    return 0;
}