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



void TC()
{
    // Your dish here
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);  // N
    for (auto &it : v) cin >> it;  // n
    sort(v.begin(), v.end());  // nlogn
    
    vector<ll> pre(n);  // N
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {  // n
        pre[i] = v[i] + pre[i - 1];
    }
    
    ll ans = 0;
    for (int first = 0; first <= k; first++) {  // k
        int second = k - first;
        int left = 2 * first;
        int right = n - second - 1;
        ll sum = pre[right] - (left == 0 ? 0 : pre[left - 1]);
        ans = max(ans, sum);
    }
    
    cout << ans << endl;
  
}

int main()
{
    FastIO;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        TC();
    }
    return 0;
}
