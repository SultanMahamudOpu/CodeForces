// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

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
}

int main()
{
    optimize();

    while (1)
    {
        ll l, k;
        cin >> l >> k;
        if (l == -1 && k == -1)
            break;

        ll sum = (l * (l - 1)) / 2;
        ll cal;
        if (k <= 2 || l == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (k % 2 == 0)
        {
            ll x = k / 2;
            x--;
            cal = x * (x + 1);
            ll y = __gcd(cal, sum);
            cal /= y;
            sum /= y;
            if (cal == 0 || cal == sum)
                cout << 1 << endl;
            else
                cout << cal << "/" << sum << endl;
        }
        else
        {
            ll x = k / 2;
            cal = x * x;
            ll y = __gcd(cal, sum);
            cal /= y;
            sum /= y;
            if (cal == 0 || cal == sum)
                cout << 1 << endl;
            else
                cout << cal << "/" << sum << endl;
        }
    }
}