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
const int mx = 1e7 + 123;
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

vector<int> primeFactors(int n)
{
    vector<int> factors;

    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }

        if (n % p == 0)
        {
            int a = 1;
            while (n % p == 0)
            {
                factors.push_back(p);

                n /= p;
            }
        }
    }

    if (n > 1)
    {
        factors.push_back(n);
    }

    return factors;
}

int main()
{
    optimize();

    int lim = 1e7;
    primeGen(lim);

    int n;
    cin >> n;
    vector<int> factors = primeFactors(n);

    for (auto p : factors)
    {
        cout << p << " ";
    }

    return 0;
}