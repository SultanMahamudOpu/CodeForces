#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        if (s1[i] == '.' && s2[i] == '.' && s1[i - 1] == 'x' && s2[i - 1] == 'x')
        {
            count++;
        }
    }

    // Special cases for the first column
    if (s1[0] == '.' && s2[0] == '.' && (s1[1] == 'x' && s2[1] == 'x'))
    {
        count++;
    }

    cout << count << endl;
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

    return 0;
}
