#include <iostream>
using namespace std;

int reverseAndAdd(int m, int n) {
    int sum = 0;
    for (int i = m; i <= n; i++) {
        int reversedNum = 0;
        int temp = i;
        while (temp > 0) {
            reversedNum = reversedNum * 10 + temp % 10;
            temp /= 10;
        }
        sum += reversedNum + i;
    }
    return sum;
}

int main() {
    int m = 21;
    int n = 35;
    int result = reverseAndAdd(m, n);
    cout << result << endl;

    return 0;
}