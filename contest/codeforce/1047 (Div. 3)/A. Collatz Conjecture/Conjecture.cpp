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
    int k, x;
    if (!(cin >> k >> x)) return; 
    ll ans = x;
    for (int i = 0; i < k; i++) ans <<= 1; 
    cout << ans << '\n';
}

int main() {
    FastIO;
    int t; 
    cin >> t;            
    while (t--) TC();    
    return 0;
}
