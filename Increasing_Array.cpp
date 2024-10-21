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
    ll arr[n + 6];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cnt += (arr[i - 1] - arr[i]);
            arr[i] = arr[i - 1];
        }
    }
    cout << cnt << endl;
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