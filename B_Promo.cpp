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

    ll n, q;
    cin >> n >> q;
    int pre[n + 5] = {0};

    int array[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n + 5);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + array[i];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int m = n - a;
        int s = m + b;
        cout << pre[s] - pre[m] << endl;
    }
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