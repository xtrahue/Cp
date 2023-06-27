#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, r, c;
        cin >> n >> k >> r >> c;

        char arr[n][n];

        for (int x = 1; x <= n; x++)
        {
            for (int y = 1; y <= n; y++)
            {
                arr[x][y] = '.';
            }
        }
        --r;
        --c;

        arr[r][c] = 'X';

        int x = r, y = c;

        while (y >= 1)
        {
            for (int i = x; i <= n; i += k)
            {
                arr[x][y] = 'X';
            }
            for (int i = x; i > 0; i -= k)
            {
                arr[x][y] = 'X';
            }
            y = y - 1;
            x = x + 1;

            if (x >= n)
            {
                x = 1;
            }
        }
        x = r, y = c;
        while (y < n)
        {
            for (int i = x; i <= n; i += k)
            {
                arr[x][y] = 'X';
            }
            for (int i = x; i > 0; i -= k)
            {
                arr[x][y] = 'X';
            }
            y = y + 1;
            x = x - 1;

            if (x < 1)
            {
                x = n;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;

        /*int i = r % k, j = c % k;
        arr[i][j] = 'X';

        int fi = i + 1, fj = j + 1;

        for (int p = fj; p <= k; p++)
        {
            if (fi > k)
            {
                arr[fi - (k)][p] == 'X';
            }
            else
            {
                arr[fi][p] == 'X';
            }
            fi++;
        }

        int bi = i - 1, bj = j - 1;

        for (int p = bj; p >= 1; p--)
        {
            if (bi <= 0)
            {
                arr[abs(bi) + (k - 1)][p] = 'X';
            }
            else
            {
                arr[bi][p] = 'X';
            }
            bi--;
        }

        for (int x = n; x >= 1; x--)
        {
            for (int y = 1; y <= n; y++)
            {
                int px = x % k, py = y % k;
                if (px == 0)
                {
                    px = k;
                }
                if (py == 0)
                {
                    py = k;
                }
                cout << arr[py][px];
            }
            cout << endl;
        }
        cout << endl;*/
    }
}