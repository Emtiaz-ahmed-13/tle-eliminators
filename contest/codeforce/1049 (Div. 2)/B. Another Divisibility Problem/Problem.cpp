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
    int x;
    cin >> x;
    ll y = 2LL * x;  
    cout << y << '\n';
}
 
int main() {
    FastIO;
    int t;
    if (!(cin >> t)) return 0;
    while (t--) TC();
    return 0;
}