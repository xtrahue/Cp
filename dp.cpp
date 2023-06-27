#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007
// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod
// fact-->factorial till 10^6
// order_of_key(ordered_st)--> returns total num of elements in the set which are smaller than the given element(logN)
/*int solveit(int i, int j, vector<string> &s, vector<vector<int>> &dp)
{
    if (s[i][j] == '*' || i < 0 || j < 0)
    {
        return 0;
    }
    if (i == 0 && j == 0)
    {
        return 1;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int up = 0;
    int left = 0;

    if (i - 1 >= 0)
    {
        up = solveit(i - 1, j, s, dp);
    }
    if (j - 1 >= 0)
    {
        left = solveit(i, j - 1, s, dp);
    }

    return dp[i][j] = up + left;
}*/
int main()
{
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    // dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '*')
            {
                dp[i][j] = 0;
            }
            else if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                int up = 0;
                int left = 0;

                if (i - 1 >= 0)
                {
                    up = (dp[i - 1][j]) % mod;
                }
                if (j - 1 >= 0)
                {
                    left = (dp[i][j - 1]) % mod;
                }

                dp[i][j] = (up + left) % mod;
            }
        }
    }

    cout << (dp[n - 1][n - 1] % mod);
}
