#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxParkedCars(vector<char> arr) {
    int n = arr.size();  // Get the length of the array
    int max_cars = 0;  // Initialize the maximum number of cars to 0
    int current_cars = 0;  // Initialize the current number of consecutive empty slots

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 'S') {
            current_cars += 1;  // Increment the current sequence of empty slots
        } else {
            max_cars = max(max_cars, current_cars);  // Update the maximum if needed
            current_cars = 0;  // Reset the current sequence
        }
    }

    // Final comparison in case the longest sequence is at the end of the array
    max_cars = max(max_cars, current_cars);

    return max_cars;
}

int main() {
    vector<char> arr = {'X', 'X', 'X', 'S', 'X', 'X', 'S', 'X', 'X', 'S', 'S', 'X', 'X', 'S', 'X', 'X'};
    cout << "Maximum number of cars that can be parked: " << maxParkedCars(arr) << endl;  // Output: 2
    return 0;
}
