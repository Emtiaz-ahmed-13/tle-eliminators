/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/
#include <bits/stdc++.h>
using namespace std;

#define FastIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cout.tie(nullptr);


bool ok(long long x, long long y, long long z) {
    for (int b = 0; b < 31; b++) {
        int xb = (x >> b) & 1;
        int yb = (y >> b) & 1;
        int zb = (z >> b) & 1;
        if (xb + yb + zb == 2)   return false;
    }
    return true;
}

int main() {
    FastIO;
    int t; 
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        cout << (ok(x,y,z) ? "YES" : "NO") << '\n';
    }
    return 0;
}