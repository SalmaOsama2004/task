#include <iostream>
using namespace std;

int main()
{
    int n, num, count;
    cin >> n;
    int arr[n];
    long long arr1[n]; // use long long instead of long to avoid overflow

    for (int k = 0; k < n; k++) {
        cin >> arr[k];
    }

    for (int k = 0; k < n; k++) {
        num = arr[k];
        count = 0;
        while (num != 0)
        {
            if (num % 2 == 1)
                count++;
            num = num / 2;
        }
        arr1[k] = count;
    }

    for (int d = 0; d < n; d++) {
        cout << arr1[d] << "\n";
    }
    return 0;
}
