// Row Column Sum of Array.....
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the size of the 2D array
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[100][100]; // You can adjust the size as needed

    // Input elements of the array
    cout << "Enter the elements of the array:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate and display row sums
    cout << "\nRow-wise Sum:\n";
    for(int i = 0; i < rows; i++) {
        int rowSum = 0;
        for(int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    // Calculate and display column sums
    cout << "\nColumn-wise Sum:\n";
    for(int j = 0; j < cols; j++) {
        int colSum = 0;
        for(int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}
