#include <iostream>
#include <algorithm>
using namespace std;

struct time
{
    int hrs;
    int min;
};

bool static cmp(struct time t1, struct time t2)
{
    if (t1.hrs != t2.hrs)
    {
        return t1.hrs < t2.hrs;
    }
    else
    {
        return t1.min < t2.min;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, h1, m1;
        cin >> n >> h1 >> m1;

        struct time t[n];

        for (int i = 0; i < n; i++)
        {
            cin >> t[i].hrs;
            cin >> t[i].min;
        }

        for (int i = 0; i < n; i++)
        {
            if (t[i].hrs > h1 || t[i].hrs == h1 && t[i].min >= m1)
            {
                if (t[i].min >= m1)
                {
                    t[i].hrs -= h1;
                    t[i].min -= m1;
                }
                else
                {
                    t[i].hrs = t[i].hrs - h1 - 1;
                    t[i].min = 60 + t[i].min - m1;
                }
            }
            else
            {
                int j = 23 - h1;
                int k = 60 - m1;

                t[i].hrs += j;
                t[i].min += k;
            }
        }

        sort(t, t + n, cmp);

        cout << t[0].hrs << " " << t[0].min << endl;
    }
}