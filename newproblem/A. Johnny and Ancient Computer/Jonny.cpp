#include <bits/stdc++.h>
using namespace std;  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        long long ra = a;
        long long rb = b;

        while(ra % 2 == 0) ra /= 2;
        while(rb % 2 == 0) rb /= 2;

        if(ra != rb) 
        {
            cout << -1 << endl;
        }
        else {
            a /= ra;
            b /= rb;
        
            double loga = log2(a);
            double logb = log2(b);
            long long ans =ceil(abs(loga - logb) / 3.0);
            cout << ans << endl;
        }
    }
}
