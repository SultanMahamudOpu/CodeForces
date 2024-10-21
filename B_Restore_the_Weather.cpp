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

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}

void solve()
{ // TODO Code
    int n, k;
    cin >> n >> k;
    vector<ll> a;
    vector<ll> b;
    for (int i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        a.push_back(c);
    }

    for (int i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        b.push_back(c);
    }

    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], i});
    }

    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        v[i].first = b[i];
    }

    sort(v.begin(), v.end(), sortbysec);

    for (auto u : v)
    {
        cout << u.first << " ";
    }
    cout << endl;
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