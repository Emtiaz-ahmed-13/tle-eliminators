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

static vector<int> cop[1001];

void build_coprimes() {
    for (int i = 1; i <= 1000; ++i) {
        cop[i].clear();
        for (int j = 1; j <= 1000; ++j) {
            if (gcd(i, j) == 1) cop[i].push_back(j);
        }
    }
}


void TC() {
    int n;
    cin >> n;
    vector<int> idx(1001, 0);          
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        idx[x] = i;                   
    }

    int ans = -1;
    for (int i = 1; i <= 1000; ++i) {
        if (!idx[i]) continue;
        for (int j : cop[i]) {
            if (idx[j]) ans = max(ans, idx[i] + idx[j]);
        }
    }
    cout << ans << '\n';
}

int main() {
    FastIO;
    build_coprimes();                  
    int t = 1;
    cin >> t;
    while (t--) TC();
    return 0;
}
