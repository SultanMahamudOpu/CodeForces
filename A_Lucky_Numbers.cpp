#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    string st;
    int mx = 0;
    int m = 0;
    int mx_e = 0;
    for (int i = l; i <= r; i++)
    {
        st = to_string(i);

        int mx_v = (*max_element(st.begin(), st.end())) - '0';
        int mi_v = (*min_element(st.begin(), st.end())) - '0';

        m = mx_v - mi_v;

        if (m >= mx)
        {
            mx = m;
            mx_e = i;
        }

        if (m == 9)
        {
            cout << i << endl;
            return;
        }
    }

    cout << mx_e << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}