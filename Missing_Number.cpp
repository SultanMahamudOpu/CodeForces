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
    int n;
    cin >> n;
    int arr[n + 5] = {0};
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
            break;
        }
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