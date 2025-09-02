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

void TC() {
    ll n, c;
    cin >> n >> c;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll l = 1, r = 1e9, ans = -1;
    while (l <= r) { 
        ll mid = (l + r) / 2;
        ll sum_all = 0; 
        for (int i = 0; i < n; i++) {
            sum_all += (a[i] + 2 * mid) * 1ll * (a[i] + 2 * mid);
            if (sum_all > c) break; 
        }

        if (sum_all == c) { 
            ans = mid;
            break;
        }
        else if (sum_all < c) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) {
        TC();
    }
    return 0;
}
