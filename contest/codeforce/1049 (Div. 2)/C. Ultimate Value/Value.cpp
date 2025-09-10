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
    if (!(cin >> n)) return;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    ll s = 0;
    for (int i = 0; i < n; i++) s += (i % 2 == 0 ? a[i] : -a[i]);
 
 
    ll bestSame = 0;
    if (n >= 3) {
        if (n % 2 == 1) bestSame = n - 1; 
        else bestSame = n - 2;       
    }
 
 
    const ll NEG_INF = LLONG_MIN / 4;
    ll bestCross = NEG_INF;
 
    
    ll prefOdd = NEG_INF; 
    for (int idx = 0; idx < n; idx++) {
        if (idx % 2 == 0) { 
            prefOdd = max(prefOdd, -2 * a[idx] - (ll)idx);
        } else { 
            if (prefOdd > NEG_INF / 2) {
                bestCross = max(bestCross, (2 * a[idx] + (ll)idx) + prefOdd);
            }
        }
    }
 
    
    ll prefEven = NEG_INF;
    for (int idx = 0; idx < n; idx++) {
        if (idx % 2 == 1) { 
            prefEven = max(prefEven, 2 * a[idx] - (ll)idx);
        } else {
            if (prefEven > NEG_INF / 2) {
                bestCross = max(bestCross, (-2 * a[idx] + (ll)idx) + prefEven);
            }
        }
    }
 
    ll extra = max({0LL, bestSame, (bestCross == NEG_INF ? 0LL : bestCross)});
    cout << s + extra << '\n';
}
 
int main() {
    FastIO;
    int t;
    cin >> t;
    while (t--) TC();
    return 0;
}