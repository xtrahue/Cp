#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int k1 = k % 4;

        if (k1 == 0)
        {
            cout << "NO" << endl;
        }
        else if (k1 == 2)
        {
            cout << "YES" << endl;
            int flag = 1;
            for (int i = 1; i < n; i += 2)
            {
                if (flag)
                {
                    cout << (i + 1) << " " << i << endl;
                }
                else
                {
                    cout << (i) << " " << i + 1 << endl;
                }
                flag = 1 - flag;
            }
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                cout << (i) << " " << i + 1 << endl;
            }
        }
    }
}