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
    ll m;
    cin >> n >> m;
    vector<pair<ll,int>> req;
    req.reserve(n + 1);
    req.push_back({0, 0});

    for (int i = 0; i < n; i++) {
        ll a; int b;
        cin >> a >> b;
        req.push_back({a, b});
    }

    ll ans = 0;
    for (int i = 1; i < (int)req.size(); i++) {
        ll L = req[i].first - req[i-1].first;
        int n = req[i-1].second ^ req[i].second; 
        ans += L - (((L & 1LL) ^ n) ? 1LL : 0LL);
    }
    ll last_t = req.back().first;
    if (m > last_t) ans += (m - last_t);

    cout << ans << '\n';
}

int main() {
    FastIO;
    int t; 
    cin >> t;
    while (t--) TC();
    return 0;
}
