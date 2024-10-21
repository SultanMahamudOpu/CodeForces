//* Bismillahir Rahmanir Rahim *\

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define mem(arr, k) memset(arr, k, sizeof(arr))
#define MOD 1000000007
#define sqr(a) ((a) * (a))
#define endl "\n"
typedef long long ll;
typedef double dd;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int N = 2e5 + 123;
ll prfSum[N];

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

const int mx = 1e4 + 123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void primeGen(int n)
{
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i] == 1)
        {
            primes.push_back(i);
        }
    }
}

const int PMX = 1e4 + 123;
set<int> factors[PMX];

int main()
{
    optimize();

    int lim = 1e4;
    primeGen(lim);

    for (auto p : primes)
    {
        for (int i = p; i <= lim; i += p)
        {
            int n = i;

            while (n % p == 0)
            {
                factors[i].insert(p);
                n /= p;
            }
        }
    }

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (factors[i].size() == 2)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}