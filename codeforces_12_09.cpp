#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
#define siz 1000001
// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod

ll inv(ll i)
{
    return i <= 1 ? i : mod - (long long)(mod / i) * inv(mod % i) % mod;
}

int main()
{
    int t = 1;
    ll fact[1000001];
    fact[0] = 1;
    fact[1] = 1;
    for (ll i = 2; i < 1000001; i++)
    {
        fact[i] = ((i * fact[i - 1]) % mod);
    }

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll ans = ((fact[n + m - 1] % mod) * (inv(fact[m]) % mod)) % mod;
        ans *= inv(fact[n - 1]);
        cout << (ans % mod) << endl;
    }
}
