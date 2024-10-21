#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string st;
    cin >> st;

    int cnt = st.size();
    for (int i = 0; i < st.size(); i++)
    {
        for (int j = i + 1; j < st.size(); j++)
        {
            if (st[i] > st[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    solve();
}