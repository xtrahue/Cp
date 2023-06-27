#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++)
    {

        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1])
        {
            // Return No
            return 0;
        }
    }
    // Return "Yes"
    return 1;
}

int main()
{
    int t;
    cin >> t;
    int out = 1;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        getline(cin >> ws, s);

        string temp = s;
        int i;
        bool flag = 1;
        for (i = n - 1; (i >= n / 2) && flag; i--)
        {
            temp = temp + s[i];
            if (isPalindrome(temp))
            {
                flag = 0;
            }
        }
        cout << "Case #" << out << ":";
        if (flag)
        {
            cout << s << endl;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                cout << s[j];
            }
            cout << endl;
        }
        out++;
    }
}