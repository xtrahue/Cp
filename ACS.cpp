#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int hun = 0;
        if (n >= 100)
        {
            hun = n / 100;
            n = n % 100;
        }
        if (n + hun <= 10)
        {
            cout << (hun + n) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}