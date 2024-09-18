#include<iostream>
#include<unordered_map>
using namespace std;

int findMaxLength(int arr[], int n){

    unordered_map<int,int> mp;

    int res = 0;
    int sum = 0;
    mp[0] = -1;

    for(int i=0; i<n; i++){
        sum += arr[i] == 1 ? 1 : -1;

        if(mp.find(sum) != mp.end()){
            res = max(res, i-mp[sum]);
        }else{
            mp[sum] = i;
        }
    }
    return res;
}

int main(){
    int n = 5;
    int arr[] = {0,0,1,0,1};

    cout << findMaxLength(arr,n);
}