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
    string st;
    cin >> st;

    char ch = st[st.size() - 1];
    // cout << ch;
    if (ch == '0' || ch == '2' || ch == '4' || ch == '6' || ch == '8')
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
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