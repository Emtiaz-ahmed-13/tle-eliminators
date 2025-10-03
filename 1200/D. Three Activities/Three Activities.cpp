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
    
    static vector<int> findMax3(const vector<int>& arr) {
        vector<pair<int,int>> tmp;
        tmp.reserve(arr.size());
        for (int i = 0; i < (int)arr.size(); ++i) tmp.emplace_back(arr[i], i);
    
    
        sort(tmp.begin(), tmp.end(), [](const auto& p, const auto& q){
            if (p.first != q.first) return p.first > q.first;
            return p.second > q.second;
        });
    
        vector<int> ans(3);
        ans[0] = tmp[0].second;
        ans[1] = tmp[1].second;
        ans[2] = tmp[2].second;
        return ans;
    }
    
    void TC() {
        int n; 
        cin >> n;
    
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        for (int i = 0; i < n; ++i) cin >> c[i];
    
        vector<int> maxa = findMax3(a);
        vector<int> maxb = findMax3(b);
        vector<int> maxc = findMax3(c);
    
        int ans = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    int x = maxa[i], y = maxb[j], z = maxc[k];
                    if (x == y || y == z || z == x) continue;
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
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