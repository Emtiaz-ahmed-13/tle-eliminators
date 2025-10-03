/*\~~~~~~~~~~~~~~~~~~~~~~~\
   \   PRINCE_EMTIAZ       \
    \~~~~~~~~~~~~~~~~~~~~~~~\*/

    #include <bits/stdc++.h>
    using namespace std;
    
    typedef long long ll;
    
    #define FastIO \
        ios_base::sync_with_stdio(false); \
        cin.tie(nullptr); \
        cout.tie(nullptr);
    
    
    
    long long lcm(long long num1, long long num2) {
        return (num1 * num2) / std::gcd(num1, num2);
    }
    
    long long calculateSum(long long start, long long end) {
        long long sum = ((start + end) * (end - start + 1)) / 2;
        return sum;
    }
    
    void TC() {
        long long n, x, y;
        cin >> n >> x >> y;
    
        long long count1 = (n / x) - (n / lcm(x, y));
        long long count2 = (n / y) - (n / lcm(x, y));
    
        long long ans = calculateSum(n - count1 + 1, n) - calculateSum(1LL, count2);
        cout << ans << '\n';
    }
    
    int main() {
        FastIO;
        int t;
        cin >> t;
        while (t--) TC();
        return 0;
    }