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

int main()
{
    optimize();

    while (true)
    {
        ll a, b;
        char ch;
        cin >> a >> ch >> b;
        if (a == 0 && b == 0)
        {
            break;
        }

        if (ch == '+')
        {
            cout << a + b << endl;
        }
        else if (ch == '-')
        {
            cout << a - b << endl;
        }

        else if (ch == '*')
        {
            cout << a * b << endl;
        }

        else if (ch == '/')
        {
            cout << a / b << endl;
        }
    }
}