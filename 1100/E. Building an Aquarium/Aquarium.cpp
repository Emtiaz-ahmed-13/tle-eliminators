/*\~~~~~~~~~~~~~~~~~~~~~~~\    
\   PRINCE_EMTIAZ         \     
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
 
bool check(ll mid, vector<ll>& heights, ll x) {
    ll units = 0;
    int n = heights.size();
    for (int i = 0; i < n; i++) {
        if (heights[i] < mid) {
            units += (mid - heights[i]);
        }
        if (units > x) return false; 
    }
    return units <= x;
}
 
void TC() {
    ll n, x;         
    cin >> n >> x;
    vector<ll> heighs(n);
    for (int i = 0; i < n; i++) {
        cin >> heighs[i];
    }
    ll si = 1, ei = 1e12, ans = -1;
    while (si <= ei) {
        ll mid = si + (ei - si) / 2;
        if (check(mid, heighs, x)) {
            ans = mid;
            si = mid + 1;
        } else {
            ei = mid - 1;
        }
    }
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