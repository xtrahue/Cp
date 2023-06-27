#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int i, int n)
{
    int result = arr[i];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int val = findGCD(a, 0, n);

        if (val > 1)
        {
            cout << n << endl;
        }
        else
        {
            int strong = 0;

            for (int i = 0; i < n; i++)
            {
                int j;
                if (i == 0)
                {
                    j = findGCD(a, 1, n);
                }
                else if (i == n - 1)
                {
                    j = findGCD(a, 0, n - 1);
                }
                else
                {
                    j = gcd(findGCD(a, 0, i), findGCD(a, i + 1, n));
                }

                if (j > 1)
                {
                    strong++;
                }
            }

            cout << strong << endl;
        }
    }
}