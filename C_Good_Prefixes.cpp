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
    ll array[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    ll prf[n + 5] = {0};
    for (int i = 1; i <= n; i++)
    {
        prf[i] = prf[i - 1] + array[i];
    }

    ll cnt = 0;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {

        if (array[i] > mx)
        {
            mx = array[i];
        }

        prf[i] -= mx;
        if (prf[i] == mx)
        {
            cnt++;
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