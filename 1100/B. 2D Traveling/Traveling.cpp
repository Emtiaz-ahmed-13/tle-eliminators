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
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<ll> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }

    // direct cost from a to b
    ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);

    // if no major cities exist
    if (k == 0) {
        cout << ans << "\n";
        return;
    }

    ll mins = LLONG_MAX, mint = LLONG_MAX;

    // minimum distance from a to any major city
    // minimum distance from b to any major city
    for (int i = 1; i <= k; i++) {
        mins = min(mins, abs(x[a] - x[i]) + abs(y[a] - y[i]));
        mint = min(mint, abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }

    // if a or b is already a major city
    if (a <= k) mins = 0;
    if (b <= k) mint = 0;

    ans = min(ans, mins + mint);
    cout << ans << "\n";
}

int main() {
    FastIO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        TC();
    }
    return 0;
}
