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
    ll arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum_0 = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            sum_0++;
        }
        if (arr[i] >= 2)
        {
            flag = 1;
        }
    }

    if (sum_0 <= (n + 1) / 2)
    {
        cout << "0" << endl;
    }
    else if (flag == 1 || sum_0 == n)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
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