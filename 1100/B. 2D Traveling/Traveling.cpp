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
    // Your dish here
    int n, k, s, t;
    cin >> n >> k >> s >> t;

    vector<ll> x(n + 1), y(n + 1);

    for (int i = 1; i <= n; i++) { 
        cin >> x[i] >> y[i];
    }

    ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
    ll mins = LLONG_MAX, mint = LLONG_MAX; 

    for (int i = 1; i <= k; i++) { // K
        mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
        mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
    }

    ans = min(ans, mins + mint);
    cout << ans << endl;
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
