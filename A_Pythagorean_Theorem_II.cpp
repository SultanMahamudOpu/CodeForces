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
const int N = 2e8 + 6;
bool prf[N];

void solve()
{ // TODO Code
    int n;
    cin >> n;
    int cnt = 0;

    for (int c = 1; c <= n; c++)
    {
        prf[c * c] = true;
    }

    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= n; b++)
        {
            int i = (a * a) + (b * b);
            if (prf[i] == true)
            {
                cnt++;
            }
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