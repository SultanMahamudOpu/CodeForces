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
    ll t, b, k;
    cin >> t >> b >> k;

        if (k >= t + b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else if (k >= t)
    {
        cout << 0 << " " << b - (k - t) << endl;
    }
    else
    {
        cout << t - k << " " << b << endl;
    }
}

int main()
{
    optimize();

    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
}