#include<iostream>
using namespace std;

int fibSum(int m, int n){
    int a=0, b=1;
    int temp, sum = 0;

    while(b <= n){
        if(b >= m){
            sum += b;
        }
        temp = a+b;
        a = b;
        b = temp;
    }
    return sum;
}

int main(){
    int m = 5, n = 20;

    cout << fibSum(m,n) << " ";

    return 0;
}

