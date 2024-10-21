// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define ff float

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    string m = "map";
    string p = "pie";
    string mp = "mapie";

    int cnt_m = 0;
    int cnt_p = 0;
    int cnt_mp = 0;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == m[0] && st[i + 1] == m[1] && st[i + 2] == m[2])
        {
            cnt_m++;
        }
        if (st[i] == mp[0] && st[i + 1] == mp[1] && st[i + 2] == mp[2] && st[i + 3] == mp[3] && st[i + 4] == mp[4])
        {
            cnt_mp++;
        }
        if (st[i] == p[0] && st[i + 1] == p[1] && st[i + 2] == p[2])
        {
            cnt_p++;
        }
    }

    int ans = cnt_m - cnt_mp + cnt_p - cnt_mp + cnt_mp;

    cout << ans << endl;
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