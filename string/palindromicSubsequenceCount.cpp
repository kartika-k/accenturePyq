#include<iostream>
#include<vector>
using namespace std;

int solve(string &s, int i, int j, vector<vector<int>>dp){

    //base case
    if(i > j) return 0;
    if(i == j) return 1;

    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(s[i] == s[j]){
        return dp[i][j] = 1 + solve(s,i+1,j,dp) + solve(s,i,j-1,dp);
    }else{
        return dp[i][j] = solve(s,i+1,j,dp) + solve(s,i,j-1,dp) - solve(s,i+1,j-1,dp);
    }
}

int main(){
    string s;
    cin >> s;

    int n = s.length();

    vector<vector<int>>dp(n,vector<int>(n,-1));

    cout << solve(s,0,n-1,dp);

    return 0;

}