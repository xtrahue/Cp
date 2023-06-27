#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int s[n];
        int b[n];

        sort(s, s + n);
        int p1 = 0;

        int sum = 0;

        if(s[p1]!=b[p1]){
            if(s[p1+1]==b[p+1] ){

            }
        }

        for (int i = 0; i < n; i++)
        {
            int poo;
            cin >> poo;
            s[i] = poo;
            b[i] = poo;
        }
        

        while (p1 < n)
        {

            int x1 = n;
            int x2 = p1;
            while (s[p1] != b[p1])
            {
                x1 = min(p1, x1);
                x2 = max(p1, x2);
                p1++;
            }
            cout << "X1: " << x1 << " X2: " << x2 << endl;
            for (int i = x1; i <= x2; i++)
            {
                sum += b[i];
            }
            cout << "SUM: " << sum << endl;
            if (s[p1] == b[p1])
            {
                    p1++;
            }
        }

        if (sum <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}