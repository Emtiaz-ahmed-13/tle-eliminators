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

void TC() {
    int n; 
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vi> pos(n + 1);
    for (int i = 0; i < n; i++) {
        if (a[i] <= n) pos[a[i]].push_back(i);
    }

    vector<array<int,3>> s;
    for (int v = 1; v <= n; v++) {
        auto &p = pos[v];
        int m = (int)p.size();
        for (int k = v; k <= m; k++) {
            s.push_back({p[k - v], p[k - 1], v});
        }
    }

    if (s.empty()) {
        cout << 0 << "\n";
        return;
    }
    sort(s.begin(), s.end(), [&](auto &x, auto &y) {
        if (x[1] != y[1]) return x[1] < y[1];
        return x[0] < y[0];
    });

    int m = s.size();
    vi ends(m);
    for (int i = 0; i < m; i++) ends[i] = s[i][1];

    vi dp(m + 1, 0);
    for (int i = 1; i <= m; i++) {
        int l = s[i-1][0], w = s[i-1][2];
        int j = (int)(lower_bound(ends.begin(), ends.end(), l) - ends.begin());
        dp[i] = max(dp[i-1], dp[j] + w);
    }

    cout << dp[m] << "\n";
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
