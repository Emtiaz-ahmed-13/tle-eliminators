/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define nl '\n'
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vll v(n);
    for (auto &it : v) cin >> it;

    vll pre(n);
    pre[0] = v[0];
    for (ll i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }

    ll ans = 0;
    for (ll k = 1; k <= n; k++) {
        if (n % k) continue; 
        ll start = k - 1;
        ll maxi = pre[start];
        ll mini = pre[start];

        for (ll idx = start + k; idx < n; idx += k) {
            ll curr = pre[idx] - pre[idx - k];
            maxi = max(maxi, curr);
            mini = min(mini, curr);
        }
        ans = max(ans, maxi - mini);
    }

    cout << ans << nl;
    
}

int main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
