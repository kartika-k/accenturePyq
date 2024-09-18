#include<iostream>
using namespace std;

int main(){
    int sum;
    cin >> sum;

    int count = 0;
    
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(i+j == sum){
                count++;
            }
        }
    }
    cout << count;

    return 0;
}