// Find max and min from array 
#include <iostream>
using namespace std;

int main() {
    int n;

    // Input size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Input elements in the array
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize min and max
    int max = arr[0];
    int min = arr[0];

    // Loop through the array to find max and min
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Output results
    cout << "Maximum number = " << max << endl;
    cout << "Minimum number = " << min << endl;

    return 0;
}
