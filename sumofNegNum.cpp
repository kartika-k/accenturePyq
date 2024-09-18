#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int sum = 0;

    if(a < 0) sum += a;
    if(b < 0) sum += b;
    if(c < 0) sum += c;
    if(d < 0) sum += d;

    cout << sum;

}