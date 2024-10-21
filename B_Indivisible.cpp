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

    ll l = 1, r = n;
    ll sum = (n * (n + 1)) / 2;

    ll div = (r - l + 1);
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    if (sum % div != 0)
    {
        ll arr[n + 10];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }

        for (int i = 2; i <= n; i += 2)
        {
            swap(arr[i - 1], arr[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "-1" << endl;
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