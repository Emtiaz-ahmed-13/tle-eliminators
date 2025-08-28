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
    int n, k; 
    string s;
    cin >> n >> k >> s;

    int cur = 0; 
    bool bad = false;
    for (char c : s) {
        if (c == '1') {
            if (++cur >= k) { 
                bad = true; 
                break; 
            }
        } else cur = 0;
    }

    if (bad) { 
        cout << "NO\n"; 
        return; 
    }

    cout << "YES\n";
    vi p(n);
    vi zeros, ones;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') zeros.push_back(i);
        else ones.push_back(i);
    }

    int val = n;
    for (int i : zeros) p[i] = val--;
    for (int i : ones)  p[i] = val--;

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << p[i];
    }
    cout << "\n";
}

int main() {
    FastIO;
    int t = 1;
    if (!(cin >> t)) return 0;
    while (t--) {
        TC();
    }
    return 0;
}
