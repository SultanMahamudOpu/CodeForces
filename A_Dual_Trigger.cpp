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

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
        {
            v.push_back(i);
        }
    }

    // for (auto u : v)
    // {
    //     cout << u << " ";
    // }
    // cout << endl;

    // cout << v.size() << endl;
    int flag = 0;
    if (v.size() == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (v.size() % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    // else if (n == 2 && v.size() == 2)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }
    else
    {
        for (int i = 0; i < (v.size() / 2); i++)
        {
            if (abs(v[i] - v[(v.size() / 2) + i]) <= 1)
            {
                // cout << i << endl;
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
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