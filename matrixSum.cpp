#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100];
    int length, i, oddlen = 0, evenlen = 0;
    int odd[50], even[50];
  
    cout << "Enter the length of array: ";
    cin >> length;

    for (i = 0; i < length; i++) {
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    // Separate odd and even indexed elements
    for (i = 0; i < length; i++) {
        if (i % 2 == 0) {
            even[evenlen++] = arr[i];
        } else {
            odd[oddlen++] = arr[i];
        }
    }

    // Sort the arrays
    sort(even, even + evenlen);
    sort(odd, odd + oddlen);
    
    // Print final result
    if (evenlen > 1 && oddlen > 1) {
        cout << even[evenlen - 2] + odd[oddlen - 2] << endl;
    } else {
        cout << "Insufficient elements for final result calculation." << endl;
    }

    return 0;
}
