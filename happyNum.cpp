#include<iostream>
#include<set>
using namespace std;

int sqOfNum(int n){
    int sq = 0;
    while(n != 0){
        int dig = n % 10;
        sq += dig*dig;
        n /= 10;
    }
    return sq;
}

bool isHappyNum(int n){
    set<int> st;
    st.insert(n);

    while(1){
        if(n == 1){
            return true;
        }
        n = sqOfNum(n);

        if(st.find(n) != st.end()){
            return false;
        }
        st.insert(n);
    }
}
int main(){
    int n;
    cin >> n;

    cout << isHappyNum(n);

    return 0;
}