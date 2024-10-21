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

    int br_1 = 0;
    int br_2 = 0;
    string ans;

    if (st.size() <= 2)
    {
        if (st[0] == ')')
        {
            br_1++;
        }

        if (st[st.size() - 1] == '(')
        {
            br_2++;
        }
    }

    if (st.size() > 2)
    {
        for (int i = 0; i < st.size(); i++)
        {

            if (st[i] == ')' && st[i - 1] != '(')
            {
                br_1++;
            }
            else if (st[i] == '(' && st[i + 1] != ')')
            {
                br_2++;
            }
        }
    }

    // cout << br_1 << " " << br_2 << endl;
    while (br_1--)
    {
        ans += '(';
    }
    for (int i = 0; i < st.size(); i++)
    {
        ans += st[i];
    }
    while (br_2--)
    {
        ans += ')';
    }

    // cout << ans << endl;
    if (st.size() == ans.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        int baki = 2 * st.size() - ans.size();

        // cout << baki << endl;
        while (true)
        {
            if (baki <= 0)
            {
                break;
            }
            ans += '(';
            ans += ')';
            baki -= 2;
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
}

void problem()
{
    string s;
    cin >> s;
    int n = s.size();
    string a, b;
    for (int i = 0; i < 2 * n; ++i)
    {
        a += "()"[i & 1];
        b += ")("[i < n];
    }
    if (a.find(s) == string::npos)
    {
        cout << "YES\n"
             << a << '\n';
    }
    else if (b.find(s) == string::npos)
    {
        cout << "YES\n"
             << b << '\n';
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    optimize();

    int t;
    cin >> t;

    while (t--)
    {
        problem();
    }
}