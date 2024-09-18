#include<iostream>
using namespace std;

int weddingGame(string s, int y, int n){
    int num = 0;
    int flag = 0;
    int cnt = 0;

    for(int i=0; i<n; i++){

        num = num*10 + (s[i] - '0');
        if(num <= y){
            flag = 1;
        }else{
            if(flag){
                cnt += 1;
            }
            num = s[i] - '0';
            flag = 0;
            if(num <= y){
                flag = 1;
            }else{
                num = 0;
            }
        }
    }
    if(flag){
        cnt = cnt + 1;
    }
    return cnt;
}

int main(){
    string s = "1234";
    int n = s.size();
    int y = 30;

    cout << weddingGame(s,y,n);

    return 0;
}