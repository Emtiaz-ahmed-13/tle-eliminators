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

int mod3(long long x) { x %= 3; if (x < 0) x += 3; return (int)x; }

void TC() {
    int n, sum = 0; 
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) { cin >> x; sum += x; }

    for (int j = 1; j < n - 1; ++j) {
        int s1 = 0;
        for (int x = 0; x < j; ++x) s1 += a[x];

        int s2 = 0;
        for (int y = j; y < n - 1; ++y) { 
            s2 += a[y];
            int t1 = mod3(s1);
            int t2 = mod3(s2);
            int t3 = mod3(sum - s1 - s2);

            if (t1 == t2 && t2 == t3) {
                cout << j << " " << (y + 1) << "\n";
                return;
            }
            if (t1 != t2 && t2 != t3 && t1 != t3) {
                cout << j << " " << (y + 1) << "\n";
                return;
            }
        }
    }
    cout << "0 0\n";
}

int main() {
    FastIO;
    int t; 
    cin >> t;
    while (t--) TC();
    return 0;
}
