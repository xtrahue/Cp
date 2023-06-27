#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ptr2 = 0, ptr1 = 0;
        int diff = 0;

        while (ptr2 < n)
        {
            if (arr[ptr2] == arr[ptr1])
            {
                ptr2++;
            }

            else
            {
                ptr1 = ptr2;
            }
            int temp = ptr2 - ptr1;
            diff = max(temp, diff);
        }
        cout << (n - diff) << endl;
    }
}