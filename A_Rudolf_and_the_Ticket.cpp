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
    int n, m, k;
    cin >> n >> m >> k;
    int cnt = 0;
    int array_n[n + 5];
    int array_m[m + 5];

    for (int i = 0; i < n; i++)
    {
        cin >> array_n[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> array_m[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(array_n[i] + array_m[j]) <= k)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array_n[i] << " ";
    // }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << array_m[i] << " ";
    // }
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