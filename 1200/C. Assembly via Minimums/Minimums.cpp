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
    
        int m = n * (n - 1) / 2;
        vector<int> v(m);
        for (int i = 0; i < m; i++) cin >> v[i];
    
        sort(v.begin(), v.end());
    
        int x = n - 1, idx = 0;
        while (x > 0) {
            cout << v[idx] << ' ';
            idx += x;
            --x;
        }
        cout << 1000000000 << '\n';
    }
    
    int main() {
        FastIO;
        int t; 
        cin >> t;
        while (t--) TC();
        return 0;
    }