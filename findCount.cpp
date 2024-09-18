#include<iostream>
using namespace std;

int findCount(int a[], int len, int num, int diff){

    int cnt = 0;
    for(int i=0; i<len; i++){
        if(abs(a[i] - num) <= diff){
            cnt++;
        }
    }
    int res = cnt > 0 ? cnt : -1;

    return res;
}

int main(){
    int len,num,diff;
    len = 6;
    num = 13;
    diff = 2;

    int a[len] = {12,3,14,56,77,113};

    cout << findCount(a,len,num,diff);

    return 0;
}