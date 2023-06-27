#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod
bool isPossible(string s, string t, ll key, ll arr[])
{
    unordered_set<int> store;
    for (int i = 0; i < key; i++)
    {
        store.insert(arr[i]);
    }

    string temp;

    for (int i = 0; i < s.size(); i++)
    {
        if (store.find(i + 1) == store.end())
        {
            temp.push_back(s[i]);
        }
    }

    int p1 = 0, p2 = 0;
    while (p1 < temp.size() && p2 < t.size())
    {
        if (temp[p1] == t[p2])
        {
            p1++;
            p2++;
        }
        else
        {
            p1++;
        }
    }

    return (p2 == t.size());
}

int main()
{
    int t = 1;
    // cin >> t;

    while (t--)
    {
        string s;
        string t;
        cin >> s >> t;

        ll n = s.size();
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll low = 0; // good-->we will delete nothing
        ll high = n;

        while (high > low + 1)
        {
            ll mid = (low + high) / 2;
            if (isPossible(s, t, mid, arr))
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }

        cout << low << endl;
    }
}
