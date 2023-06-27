#include <bits/stdc++.h>
using namespace std;

long double multiply(long double mid, int n)
{
    long double ans = mid;
    for (int i = 0; i < n - 1; i++)
    {
        ans = ans * mid;
    }
    return ans;
}

long double Nth_root(int n, int m)
{
    long double low = 1.0;
    long double high = (long double)m;

    long double eps = 1e-9;

    while (high - low > eps)
    {
        long double mid = (long double)((low + high) / 2.0);

        long double x = multiply(mid, n);
        if (x == m)
        {
            return mid;
        }
        if (x > m)
        {
            high = mid;
        }
        if (x < m)
        {
            low = mid;
        }
    }
    return low;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        long double a = Nth_root(n, m);
        cout << a << endl;
    }
}