// You are required to implement the following Function LargeSmallSum(arr). 
// The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest element from the 
//even positions and second smallest from the odd position of given ‘arr’.

// Assumption:
// All array elements are unique
// Treat the 0th position a seven
// NOTE:
// Return 0 if array is empty
// Return 0, if array length is 3 or less than 3
// Example:-
// Input: arr:3 2 1 7 5 4
//Output: 7

// Sample Input : arr:1 8 0 2 3 5 6
//Sample Output: 8

#include<iostream>
#include<algorithm>
using namespace std;

int LargeSmallSum(int arr[], int n){
    int *evenArr = new int[n];
    int evencount = 0;
    int *oddArr = new int[n];
    int oddCount = 0;
    // int ans;

    if(n <= 3){
        // ans = 0;
        return 0;
    }
    else{
        evenArr[0] = arr[0];
        evencount = 1;
        for(int i=1; i<n; i++){
            if(i % 2 == 0){
                evenArr[evencount] = arr[i];
                evencount++;
            }else{
                oddArr[oddCount] = arr[i];
                oddCount++;
            }
        }
        sort(evenArr, evenArr + evencount);
        sort(oddArr, oddArr + oddCount);

        // ans = evenArr[evencount - 2] + oddArr[oddCount - 2];
    }

    // return ans;
    return evenArr[evencount-2] + oddArr[oddCount -2];
}

int main(){
    int n;
    cout << "Enter Size of array: ";
    cin >> n;

    // int arr[n];  BAD PRACTICE 
    int *arr = new int[n];  //dynamic array 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "sum of second largest element from the even positions and second smallest from the odd position is: " << LargeSmallSum(arr,n);

    return 0;
}

