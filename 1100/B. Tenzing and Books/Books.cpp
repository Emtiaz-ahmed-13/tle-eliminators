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
        int n, x;
        cin >> n >> x;
        vector<int> pre[3];
        for (int i = 0; i < 3; i++) {//n*3
            int s = 0;
            pre[i].push_back(s);
            for (int j = 0; j < n; j++) {
                int a;
                cin >> a;
                if ((s | a) != s){
                    s |= a;
                    pre[i].push_back(s);
                }
            }
        }
        bool ans = 0;
        for (int A : pre[0]){//(31^3)
            for (int B : pre[1]) {
                for (int C : pre[2]){
                    if((A | B | C )== x){
                        ans=true;
                    }
                }
            }
        } 
            
        cout << (ans ? "YES\n" : "NO\n");
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