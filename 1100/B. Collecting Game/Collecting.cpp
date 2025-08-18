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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v; // {value, original index}
    v.reserve(n);

    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        v.pb({a, i});
    }

    sort(all(v)); // sort by value

    vector<ll> pre(n);
    pre[0] = v[0].ff;
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] + v[i].ff;
    }

    vector<ll> ans(n);
    for(int i=0; i<n; i++){
        int j = i;
        int found = i;
        while(j < n){
            pair<ll,ll> temp = {pre[j] + 1, LLONG_MIN};
            ll idx = lower_bound(all(v), temp) - v.begin();
            idx--;
            if(idx == j){
                break;
            }
            found = idx;
            j = idx;
        }
        ans[v[i].ss] = found;
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << nl;
}

int main()
{
    FastIO;
    int t = 1;
    cin >> t;
    while(t--){
        TC();
    }
    return 0;
}
