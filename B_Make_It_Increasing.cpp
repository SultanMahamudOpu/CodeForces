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
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1] && v[i] > 0)
        {
            v[i] /= 2;
            cnt++;
        }

        if (v[i] == v[i + 1])
        {
            cout << "-1" << endl;
            return;
        }
    }
    cout << cnt << endl;
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