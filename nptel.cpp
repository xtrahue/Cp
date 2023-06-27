#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
    sort(str.begin(), str.end());
}

int main()
{
    int t;
    cin >> t;

    int a[t];

    map<int, int> mp;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    map<int, int>::iterator it = mp.begin();

    long long int count = 0;

    while (it != mp.end())
    {
        cout << it->first << " " << it->second << endl;
        ++it;
    }
}