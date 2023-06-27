#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, b, s;
        cin >> n >> k >> b >> s;

        long long int counter = 0, checker = 0;

        for (long long int i = 0; i < n && (counter == 0); i++)
        {
            long long int p = (s - (i * (k - 1)));

            if (p / k == b)
            {
                checker = 1;
                counter = i;
                // cout << "P: " << p << endl;
            }
        }
        if (counter || checker)
        {
            for (long long int i = 1; i <= (n - (counter + 1)); i++)
            {
                cout << "0 ";
            }
            for (long long int i = 1; i <= counter; i++)
            {
                cout << k - 1 << " ";
            }
            cout << (s - counter * (k - 1)) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}