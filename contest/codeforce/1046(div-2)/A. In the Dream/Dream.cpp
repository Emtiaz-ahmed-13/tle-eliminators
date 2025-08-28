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

bool ch(int x, int y) {
    if (x == 0 && y == 0) return true;
    if (x == 0) return y <= 2;
    if (y == 0) return x <= 2;
    return (x <= 2*(y+1)) && (y <= 2*(x+1));
}

void TC() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int r2 = c - a;
    int k2 = d - b;
    if (r2 < 0 || k2 < 0) {
        cout << "NO\n";
        return;
    }
    if (ch(a, b) && ch(r2, k2)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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