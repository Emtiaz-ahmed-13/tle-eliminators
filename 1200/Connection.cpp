/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FastIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr);


void TC() {
    int n; 
    cin >> n;
    vi gang(n + 1);
    for (int i = 1; i <= n; ++i) cin >> gang[i];

    vector<pair<int,int>> edges;
    int val1 = 1, val2 = -1;

   
    for (int i = 2; i <= n; ++i) {
        if (gang[i] != gang[1]) {
            edges.emplace_back(1, i);
            val2 = i;
            break;
        }
    }

    if (val2 == -1) {
        cout << "NO\n";
        return;
    }

    for (int i = 2; i <= n; ++i) {
        if (i == val2) continue;
        if (gang[i] != gang[val1]) {
            edges.emplace_back(val1, i);   
        } else {
            edges.emplace_back(val2, i);   
        }
    }

    cout << "YES\n";
    for (auto &e : edges) cout << e.first << ' ' << e.second << '\n';
}

int main() {
    FastIO;
    int t; 
    cin >> t;
    while (t--) TC();
    return 0;
}
