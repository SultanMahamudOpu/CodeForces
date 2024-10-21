//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{ // TODO Code
    ll a, b, c;
    cin >> a >> b >> c;
    ll minn = min({a, b, c});
    ll maxx = max({a, b, c});
    ll mid = (a + b + c) - (maxx + minn);

    if (a == b && b == c)
    {
        cout << "YES" << endl;
    }
    else if (maxx % minn == 0 && mid % minn == 0 && ((maxx / minn) - 1) + ((mid / minn) - 1) <= 3)
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
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}