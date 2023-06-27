#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod
// fact-->factorial till 10^6
// order_of_key(ordered_st)--> returns total num of elements in the set which are smaller than the given element(logN)

int main()
{
    ll n, q;
    cin >> n >> q;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (arr[i - 1] > arr[i - 2])
        {
            dp[i] = (dp[i - 1] + 1);
        }
        else
        {
            if (i - 3 >= 0 && arr[i - 3] >= arr[i - 2])
            {
                dp[i] = dp[i - 1];
            }
            else
            {
                dp[i] = (dp[i - 1] + 1);
            }
        }
        // cout << dp[i] << " ";
    }
    // cout << endl;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        if (r - l < 2)
        {
            cout << (r - l + 1) << "\n";
        }
        else
        {
            ll ans = dp[r] - dp[l - 1];
            if (l - 1 >= 0 && dp[l - 1] == dp[l])
            {
                ans++;
            }
            if (l + 1 <= n && dp[l + 1] == dp[l])
            {
                ans++;
            }

            cout << ans << "\n";
        }
    }
}
