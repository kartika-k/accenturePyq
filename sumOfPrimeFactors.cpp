#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 2, sum = 0;
    int currFactor = -1;

    while(n > 1){
        if(n % i == 0){
            if(i != currFactor){
                sum = sum+i;
                currFactor = i;
            }
            n = n/i;
        }else{
            i++;
        }
    }
    cout << sum << endl;
}