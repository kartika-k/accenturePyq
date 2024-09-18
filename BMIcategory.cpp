#include<iostream>
using namespace std;

int main(){
    int wt;
    cin >> wt;

    float ht;
    cin >> ht;

    int bmi = wt/(ht*ht);

    if(bmi < 18){
        cout << 0;
    }
    else if(bmi >= 18 && bmi < 25){
        cout << 1;
    }
    else if(bmi >= 25 && bmi < 30){
        cout << 2;
    }
    else if(bmi >= 30 && bmi < 40){
        cout << 3;
    }else{
        cout << 4;
    }

    return 0;
}