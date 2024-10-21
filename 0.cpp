//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define ff float

void solve()
{
    int n;
    cin>>n;
    int bob,ale;

    bob=2*n;
    ale=n*n;

    if(bob==ale){
        cout<<"YES"<<endl;
    }   else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    optimize();

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }
}