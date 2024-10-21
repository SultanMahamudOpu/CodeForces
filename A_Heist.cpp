// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll array[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);

    ll cnt = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (array[i] + 1 != array[i + 1])
        {
            cnt += array[i + 1] - array[i] - 1;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();

    solve();
}