#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    int array[27] = {0};
    vector<char> v;
    for (int i = 0; i < st.size(); i++)
    {
        if (array[st[i] - 'a'] == 0)
        {
            v.push_back(st[i]);
            array[st[i] - 'a'] = 1;
        }
    }
    sort(v.begin(), v.end());

    vector<char> v_rev = v;
    reverse(v_rev.begin(), v_rev.end());

    vector<pair<char, int>> vp;
    for (int i = 0; i < v.size(); i++)
    {
        vp.push_back({v[i], i});
    }

    string ans;
    for (int i = 0; i < st.size(); i++)
    {
        for (int j = 0; j < vp.size(); j++)
        {
            if (st[i] == vp[j].first)
            {
                ans += v_rev[vp[j].second];
            }
        }
    }

    cout << ans << endl;
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