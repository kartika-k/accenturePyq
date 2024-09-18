#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n > 9){
        if(n % 2 == 0){
            n = floor((n-2)/2);
        }
        else if(n % 2 != 0){
            n = floor(n/2);
        }
    }
    cout << n;
}