//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt = 0, flag = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            while ((arr[i] >= arr[i + 1]) && arr[i] > 0)
            {
                arr[i] = arr[i] / 2;
                cnt++;
            }
            if (arr[i] == arr[i + 1])
            {
                // cout << "HELLO";
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
}