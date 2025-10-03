/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

    #include <bits/stdc++.h>
    using namespace std;
    
    typedef long long ll;
    typedef vector<ll> vll;
    
    #define FastIO \
        ios_base::sync_with_stdio(false); \
        cin.tie(nullptr); \
        cout.tie(nullptr);
    
    void TC() {
        int n;
        cin >> n;
    
        vll arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];
    
        ll ans = 0;
        for (int i = 1; i <= 60; ++i) {        
            ll k = 1LL << i;
            set<ll> distinctVals;
            for (int ind = 0; ind < n; ++ind) {
                distinctVals.insert(arr[ind] % k);
            }
            if ((int)distinctVals.size() == 2) {
                ans = k;
                break;
            }
        }
        cout << ans << '\n';
    }
    
    int main() {
        FastIO;
        int t; 
        cin >> t;
        while (t--) TC();
        return 0;
    }