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
    int n;
    cin >> n;
    string st;
    cin >> st;

    int m = 1;
    int cnt = 1;
    for (int i = 0; i < st.size() - 1; i++)
    {
        if (st[i] == st[i + 1])
        {
            cnt++;
            if (cnt > m)
            {
                m = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
    }

    cout << m + 1 << endl;
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