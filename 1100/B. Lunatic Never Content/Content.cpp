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
     int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
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