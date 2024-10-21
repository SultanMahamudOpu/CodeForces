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
    vector<int> v;
    vector<int> u;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        u.push_back(a);
    }

    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (u[i] < v[i])
            {
                v[v.size() - 1] = v[i];
                v[i] = u[i];
                cnt++;
            }
        }

        // for (int k = 0; k < v.size(); k++)
        // {
        //     cout << v[k] << " ";
        // }
        // cout << endl;
        sort(v.begin(), v.end());
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