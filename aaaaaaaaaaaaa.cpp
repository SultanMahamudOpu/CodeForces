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
    string st;
    cin >> st;

    string ans;
    for (int i = 0; i < st.size(); i++)
    {
        int n = st[i] - '0';

        int a;
        if (n == 9 && i == 0)
        {
            a = 9;
        }
        else
        {
            a = 9 - n;
        }

        ans += min(a, n) + '0';
    }

    cout << ans << endl;
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