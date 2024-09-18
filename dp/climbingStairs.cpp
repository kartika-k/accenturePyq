#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
    if (n == 0 || n == 1) return 1; // Base cases

    vector<int> dp(n + 1); // DP table
    dp[0] = 1; // 1 way to stay at the ground
    dp[1] = 1; // 1 way to reach the first step

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2]; // Recurrence relation
    }

    return dp[n]; // Number of ways to reach the top
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    cout << "Number of ways to climb " << n << " steps: " << climbStairs(n) << endl;

    return 0;
}
