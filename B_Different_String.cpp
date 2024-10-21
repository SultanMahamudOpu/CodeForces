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
    string st;
    cin >> st;

    int flag = 0;
    for (int i = 0; i < st.size() - 1; i++)
    {
        if (st[i] != st[i + 1])
        {
            swap(st[i], st[i + 1]);
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
        cout << st << endl;
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