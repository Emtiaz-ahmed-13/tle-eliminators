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

#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; ++i)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int md = (int)1e9 + 7;

void TC()
{
    int n, k; 
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int maxi = 0, sum = 0, ans = 0;

    for (int i = 0; i < min(n, k); i++) {
        sum += a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + (k - (i + 1)) * maxi);
    }
    cout << ans << nl;
}

int main()
{
    FastIO;
    int t = 1;
    cin >> t;
    while (t--) {
        TC();
    }
    return 0;
}
