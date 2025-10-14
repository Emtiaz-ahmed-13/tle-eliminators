/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FastIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr);

void TC()
{
   
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];

    // frequency map
    unordered_map<ll, ll> fr;
    for (ll x : a) fr[x]++;

    vector<ll> v;      
    ll ans = 0;        
    ll cnt = 0;        

    for (auto &p : fr) {
        ll val = p.first;
        ll freq = p.second;
        if (freq & 1) v.push_back(val);
        ans += freq / 2;
        cnt += (freq / 2) * 2;
    }

    if (ans == 0) { 
        cout << 0 << '\n';
        return;
    }

    sort(v.begin(), v.end());

    ll finans = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] < ans) {
            finans = max(finans, ans + v[i]);
        }
    }
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] - v[i - 1] < ans) {
            
            ll cand = max(ans + v[i], ans + v[i - 1]);
            finans = max(finans, cand);
        }
    }

    cout << finans << '\n';
}

int main()
{
    FastIO;
    int t = 1;
    cin >> t;
    while (t--) TC();
    return 0;
}
