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
    int cnt = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'U')
        {
            cnt++;
        }
    }

    if (cnt % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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