#include <iostream>
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
        int sum = 0;
        int p;

        for (int i = 0; i < n; i++)
        {
            cin >> p;
            arr[i] = p;
            sum += p;
        }

        int j = sum / (n + 1);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] - j << " ";
        }
        cout << endl;
    }
}