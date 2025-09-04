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
    for (int i = 0; i < n; i++){//n
        cin >> a[i];
    }
    sort(a.begin(), a.end());//nlogn
    vector<int> b(n);
    for (int i = 0; i < n; i++){//n
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());//nlogn
    ll result = 1;
    for (int i = 0; i < n; i++) {//nlogn
        ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll count = a.size() - temp;
        result = result * max(count - i, 0LL) % md; 
    }
    cout << result << endl;
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
