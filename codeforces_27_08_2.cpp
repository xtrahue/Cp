#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        /*string s1, s2, s3;

        getline(cin >> ws, s1);
        getline(cin >> ws, s2);
        getline(cin >> ws, s3);

        remove(s1.begin(), s1.end(), ' ');
        remove(s2.begin(), s2.end(), ' ');
        remove(s3.begin(), s3.end(), ' ');

        cout << s1 << "-s1 " << s2 << "-s2 " << s3 << "-s3 " << endl;*/

        vector<string> s1;
        vector<string> s2;
        vector<string> s3;

        int j = n;
        int count = 1;

        while (j--)
        {
            string str;
            cin >> str;

            s1.push_back(str);
        }
        int p = n;
        while (p--)
        {
            string str;
            cin >> str;

            s2.push_back(str);
        }
        int so = n;
        while (so--)
        {
            string str;
            cin >> str;

            s3.push_back(str);
        }

        int p1 = 0, p2 = 0, p3 = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 1;
            p1++;
            for (int k = 0; k < n; k++)
            {
                if (s1[i] == s2[k])
                {
                    // cout << "S2: " << i << endl;
                    count++;
                    p2++;
                    s1[i] = "XX";
                    s2[k] == "XX";
                }
                if (s1[i] == s3[k])
                {
                    // cout << "S3: " << i << endl;
                    count++;
                    p3++;
                    s1[i] = "XX";
                    s3[k] == "XX";
                }
            }
            cout << "COUNT: " << count << endl;
            if (count == 1)
            {
                p1 += 2;
            }
            if (count == 3)
            {
                p1--;
                p2--;
                p3--;
            }
            /*count = 1;
            p1++;
            for (int j = n; j < 2 * n; j++)
            {

                if (s[j] == s[i] && j < 2 * n)
                {
                    count++;
                    s[i] = "XX";
                    s[j] = "XX";
                    p2++;
                }
                else if (s[i] == s[j] && j < 3 * n)
                {
                    count++;
                    s[i] = "XX";
                    s[j] = "XX";
                    p3++;
                }
            }
            for (int k = 2 * n; k < 3 * n; k++)
            {
                if (s[k] == s[i])
                {
                    count++;
                    s[i] = "XX";
                    s[k] = "XX";
                    p3++;
                }
            }
            cout << "COUNT:" << count << endl;

            if (count == 1)
            {
                p1 += 2;
            }
            else if (count >= 3)
            {
                p1--;
                p2--;
                p3--;
            }
            // cout << "P1: " << p1 << endl;*/
        }
        /*for (int i = 0; i < 3 * n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
        for (int i = n; i < 2 * n; i++)
        {
            count = 1;
            for (int k = 2 * n; k < 3 * n; k++)
            {

                if (s[i] == s[k])
                {
                    count++;
                    s[i] = "XX";
                    s[k] = "XX";
                    p2++;
                    p3++;
                }
            }
            if (count == 1)
            {
                p2 += 3;
            }
        }
        for (int i = 0; i < 3 * n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
        for (int i = 2 * n; i < 3 * n; i++)
        {
            if (s[i] != "XX")
            {
                p3 += 3;
            }
        }
        for (int i = 0; i < 3 * n; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;*/

        cout << p1 << " " << p2 << " " << p3 << endl;
    }
}