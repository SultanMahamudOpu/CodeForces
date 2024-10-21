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
    ll array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    ll maxx = array[0];
    ll minn = array[0];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > maxx)
        {
            maxx = array[i];
        }
        if (array[i] < minn)
        {
            minn = array[i];
        }
        sum += array[i];
    }

    cout << minn << " " << maxx << " " << sum << endl;
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