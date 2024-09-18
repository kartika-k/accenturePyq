#include<iostream>
using namespace std;

int finalScore(string s){
    int n = s.length();
    int score = 0;
    int headCnt = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'H'){
            score += 2;
            headCnt++;
        }
        else if(s[i] == 'T'){
            score -= 1;
            headCnt = 0;
        }
        if(headCnt == 3){
            return score;
        }
    }
    return score;
}

int main(){
    string s;
    cin >> s;

    cout << finalScore(s);

    return 0;
}