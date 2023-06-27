#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

// power
// sieve
// cp
// bit_sub --> subsets using bitmasking

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> ans(n + 1, -1);
        vector<bool> used(n + 1, 0);

        ans[1] = k;
        ans[n] = 1;

        used[k] = 1;
        used[1] = 1;

        bool flag = 1;

        for (int i = 2; i < n && flag; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (i == j && used[j] == 0)
                {
                    ans[i] = j;
                    used[j] = 1;
                    break;
                }
                else if (used[j] == 0 && n % j == 0)
                {
                    ans[i] = j;
                    used[j] = 1;
                    break;
                }
            }
            if (ans[i] == -1)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
