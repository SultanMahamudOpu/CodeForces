#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string st;
    for (int i = 1; i <= 12; i++)
    {
        if (i == a || i == b)
        {
            st += 'a';
        }

        if (i == c || i == d)
        {
            st += 'b';
        }
    }

    if (st == "abab" || st == "baba")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}