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
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;

    while (true)
    {
        if (n == 1)
        {
            sum += a;
            n--;
        }
        else
        {
            if (a + a < b)
            {
                sum += (a + a);
                n -= 2;
            }
            else
            {
                sum += b;
                n -= 2;
            }
        }

        if (n <= 0)
        {
            break;
        }
    }

    cout << sum << endl;
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