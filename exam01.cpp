// Negative / Positive Count
#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {5, -6, 8, -2, 1};
    int p_num = 0, n_num = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0) {
            p_num++;
        } else if (arr[i] < 0) {
            n_num++;
        }
    }

    cout << "Total positive numbers: " << p_num << endl;
    cout << "Total negative numbers: " << n_num << endl;

    return 0;
}
