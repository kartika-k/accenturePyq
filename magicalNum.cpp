#include<iostream>
using namespace std;

int magicalNum(int n){
    if(n == 0){
        return 0;
    }
    int magicalNumCount = 0;

    for(int i=1; i<=n; i++){
        int sum = 0;
        int j = i;

        while(j > 0){
            if(j & 1){
                sum += 2;
            }else{
                sum += 1;
            }
            j = j >> 1;
        }
        if(sum % 2 == 1){
            magicalNumCount++;
        }
    }
    return magicalNumCount;
}

int main(){
    int n;
    cin >> n;

    cout << magicalNum(n);

    return 0;
}