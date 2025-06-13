// Odd Even Seprate Array 
#include <iostream>

using namespace std;

int main() {
    int size = 5;
    int arr[size] = {5, 6, 8, 2, 1};
    int e_num = 0, o_num = 0;

        for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) {
            e_num++;
            
        } else if (arr[i] < 0) {
            o_num++;
        }
    }

    cout << "Total Odd numbers: " << o_num << endl;
    cout << "Total Even numbers: " << e_num << endl;

    return 0;
}