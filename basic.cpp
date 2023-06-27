#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, k, temp;
    cin >> n >> k;

    int arr[n];

    int sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
        sum1 += temp;
    }

    int maxi1 = sum1;
    int maxi2 = sum1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += k;
        }
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
        }
        cout << "Sum " << sum << endl;
        maxi1 = max(sum, maxi1);
        cout << "Max1 " << maxi1 << endl;
    }
    int m1 = maxi1;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = n - 1; j >= i; j--)
        {
            sum += k;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            sum += arr[j];
        }
        cout << "Sum " << sum << endl;
        maxi2 = max(sum, maxi2);
        cout << "Max2 " << maxi2 << endl;
    }
    int m2 = maxi2;

    cout << max(maxi1, maxi2) << endl;
}