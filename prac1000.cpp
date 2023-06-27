#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> prime_factors(int n)
{
    vector<int> factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}

int find_shortest_good_segment(vector<int> &a)
{
    int n = a.size();
    int gcd = a[0];
    set<int> factors;
    factors.insert(prime_factors(gcd).begin(), prime_factors(gcd).end());
    int l = 0;
    int r = 0;
    int shortest = n + 1;

    while (r < n)
    {
        if (gcd == 1)
        {
            shortest = min(shortest, r - l + 1);
            gcd /= a[l];
            auto l_factors = prime_factors(a[l]);
            for (int f : l_factors)
            {
                factors.erase(f);
            }
            l++;
        }
        else
        {
            r++;
            if (r < n)
            {
                gcd *= a[r];
                auto r_factors = prime_factors(a[r]);
                for (int f : r_factors)
                {
                    factors.insert(f);
                }
            }
        }
        if (factors.empty())
        {
            return 1;
        }
    }

    if (shortest == n + 1)
    {
        return -1;
    }
    else
    {
        return shortest;
    }
}

int main()
{
    string s;
    cin >> s;

    cout << (int)s[0] << endl;
}
