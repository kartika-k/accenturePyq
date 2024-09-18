#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int deleteAndEarn(vector<int> arr, int n){
    int maxi = *max_element(arr.begin(), arr.end());

    unordered_map<int,int> val;
    for(int i: arr){
        val[i] += i;
    }

    int pick = val[1];
    int notPick = 0;

    for(int i=2; i<= maxi; i++){
        int newPick = notPick + val[i];
        int newNotPick = max(pick,notPick);
        notPick = newNotPick;
        pick = newPick;
    }
    return max(pick,notPick);
}

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << deleteAndEarn(arr,n);

    return 0;
}