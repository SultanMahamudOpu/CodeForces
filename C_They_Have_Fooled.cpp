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
    if (n == 0)
        cout << 10 << endl;
    else if (n == 1)
        cout << 10 << endl;
    else if (n == 2)
        cout << 8 << endl;
    else if (n == 3)
        cout << 9 << endl;
    else if (n == 4)
        cout << 8 << endl;
    else if (n == 5)
        cout << 7 << endl;
    else if (n == 6)
        cout << 7 << endl;
    else if (n == 7)
        cout << 7 << endl;
    else if (n == 8)
        cout << 7 << endl;
    else if (n == 9)
        cout << 0 << endl;
    else if (n == 10)
        cout << 9 << endl;
    else if (n == 12)
        cout << 8 << endl;
    else if (n == 11)
        cout << 6 << endl;
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