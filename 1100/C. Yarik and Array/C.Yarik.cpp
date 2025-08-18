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

void TC() {
    ll n;
    cin >> n;
    vll v(n);
    for (ll &x : v) cin >> x;

    ll ans = LLONG_MIN;
    ll sum = v[0];
    ans = max(ans, sum);

    for (int i = 1; i < n; i++) {
        if ( (v[i] & 1) != (v[i - 1] & 1) ) {
            sum += v[i];
        } else {
            sum = v[i];
        }
        ans = max(ans, sum);
    }

    cout << ans << nl;
}

int main() {
    FastIO;
    int t = 1;
    cin >> t;
    while (t--) {
        TC();
    }
    return 0;
}
