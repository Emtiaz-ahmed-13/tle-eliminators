#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n), b(n);

        int i;
        for (i = 0; i < n; ++i) cin >> a[i];
        for (i = 0; i < n; ++i) cin >> b[i];

        long long sup = 0;
        for (i = 0; i < n; ++i)
            if (a[i] > b[i])
                sup += (a[i] - b[i]);

        cout << (sup + 1) << endl;
    }

    return 0;
}
