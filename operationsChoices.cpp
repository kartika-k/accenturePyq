#include<iostream>
using namespace std;

int operationChoices(int c, int a, int b){
    if(c == 1){
        return a+b;
    }
    else if(c == 2){
        return a-b;
    }
    else if(c == 3){
        return a*b;
    }
    else if(c == 4){
        return a/b;
    }
}

int main(){
    int c,a,b;
    cin >> c >> a >> b;

    cout << operationChoices(c,a,b);

    return 0;

}