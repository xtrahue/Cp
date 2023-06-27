#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gasagu(ll a, ll b)
{
    // cout << "_1" << endl;
    if (b == 0)
    {
        return a;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        ll k = a >> 1;
        ll l = b >> 1;
        return (2 * (gasagu(max(k, l), min(k, l))));
    }
    else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
    {
        if (a % 2 == 0)
        {
            ll k = a >> 1;
            return gasagu(max(k, b), min(k, b));
        }
        else
        {
            ll k = b >> 1;
            return gasagu(max(k, a), min(k, a));
        }
    }
    else
    {
        ll x = (a - b) >> 1;

        return gasagu(max(x, b), min(x, b));
    }
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        cout << __gcd(x, y) << " " << gasagu(x, y) << endl;
    }
}