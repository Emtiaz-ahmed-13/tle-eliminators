/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;

#define FastIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr);

const int md = (int)1e9 + 7;

static inline ll modmul(ll a, ll b, ll m) {
    return (ll)((__int128)a * b % m);
}

static ll modpow(ll a, ll e, ll m) {
    ll r = 1 % m;
    a %= m;
    while (e) {
        if (e & 1) r = modmul(r, a, m);
        a = modmul(a, a, m);
        e >>= 1;
    }
    return r;
}

// smallest prime factor of x (x >= 2)
static ll spf(ll x) {
    if (x % 2 == 0) return 2;
    for (ll d = 3; d * d <= x; d += 2)
        if (x % d == 0) return d;
    return x; // x is prime
}

void TC()
{
    ll n, k;
    cin >> n >> k;
    vll a(n);
    for (auto &x : a) cin >> x;

    if (k & 1LL) {
        // k is odd: one op – add k to all odd elements -> all even
        for (auto &x : a) if (x & 1LL) x += k;
    } else {
        // k is even: use a prime divisor p of (k+1)
        ll kp1 = k + 1;
        ll p = spf(kp1);                  // prime
        ll inv = modpow(k % p, p - 2, p); // inverse of k mod p (p is prime, gcd(k,p)=1)

        for (auto &x : a) {
            ll r = x % p; if (r < 0) r += p;
            ll need = modmul((p - r) % p, inv, p); // m_i in [0..p-1]
            x += need * k; // achievable in <= p-1 <= k operations
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
}

int main()
{
    FastIO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        TC();
    }
    return 0;
}
