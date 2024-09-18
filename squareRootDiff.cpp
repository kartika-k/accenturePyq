#include <iostream>
#include<math.h>
using namespace std;

double calculateDiff(int m, int n){
    double evenSum = 0, oddSum = 0;

    for(int i=m; i<=n; i++){
        double sqroot = sqrt(i);
        (i % 2 == 0) ?  evenSum += sqroot : oddSum += sqroot;
    }
    return evenSum - oddSum;
}

int main(){
    int m=1,n=10;

    cout << calculateDiff(m,n);

    return 0;
}