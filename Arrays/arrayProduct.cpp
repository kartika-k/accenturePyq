// products of sums of smaller and larger elements for each array element. 

#include<iostream>
using namespace std;

int* product(int a[], int n){
    if(n == 0){
        return NULL;
    }
    for(int i=0; i<n; i++){
        int sumS = 0;
        int sumL = 0;

        for(int j=i+1; j<n; j++){
            if(a[j] < a[i]){
                sumS += a[j];
            }else{
                sumL += a[j];
            }
        }
        a[i] = sumS*sumL;
    }
    return a;

}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int* res = product(arr,n);
    for(int i=0; i<n; i++){
        cout << res[i] << " ";
    }

    return 0;
}