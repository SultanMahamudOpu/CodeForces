#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int t = 0;

    if (y % 2 == 0)
    {
        int z = y / 2;
        int r = 15 * z - 4 * y;
        t = z;
        while (x > r)
        {
            t++;
            x -= 15;
        }
    }
    else
    {
        int z = (y / 2) + 1;
        int r = 15 * z - 4 * y;
        t = z;
        while (x > r)
        {
            t++;
            x -= 15;
        }
    }

    cout << t << endl;
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