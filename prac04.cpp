#include <bits/stdc++.h>
using namespace std;

struct data
{
    int value;
    int index;
    int m;
};

static bool cmp(struct data a1, struct data a2)
{
    return a1.value < a2.value;
}

static bool cmp1(struct data a1, struct data a2)
{
    return a1.index < a2.index;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        struct data a[n];

        for (int i = 0; i < n; i++)
        {
            a[i].value = arr[i];
            a[i].index = i;
        }

        sort(a, a + n, cmp);

        int prev = 1;

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {

                int maxi = a[0].value;
                int j = 0;
                int checker = 0;
                for (int j = 1; j < n; i++)
                {

                    if (a[0].value <= 2 * a[j].value && a[j].value >= maxi)
                    {
                        checker = 1;
                        maxi = a[j].value;
                    }
                }
                if (checker)
                {
                    a[0].m = maxi;
                }
                else
                {
                    a[0].m = -1;
                }
            }
            else
            {
                int j = prev - 1;

                while (a[j].value <= 2 * a[i].value)
                {
                    if (j == i)
                    {
                        continue;
                    }
                    j++;
                }
                prev = j - 1;
                a[i].m = a[prev].value;
            }
        }

        sort(a, a + n, cmp1);

        for (int i = 0; i < n; i++)
        {
            cout << a[i].m << " ";
        }
        cout << endl;
    }
}