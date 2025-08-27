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

const int md  = 1e9 + 7;
const int md2 = 998244353;

void TC()
{
    ll n, k; 
    cin >> n >> k;
    map<ll, ll> s;

    // First array
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        s[x % k]++;
    }

    // Second array
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        s[x % k]--;
    }

    
    for (auto it : s) {
        if (it.second != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
