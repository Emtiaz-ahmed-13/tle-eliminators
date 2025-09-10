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
    string s;
    cin>>s;
    ll n=s.size();
    int maxi=0;
    int i=0;
    while(i<n){//n
        if(s[i]=='0'){
            i++;
            continue;
        }
        int j=i+1;
        while(j<n && s[j]=='1'){
            j++;
        }
        maxi=max(maxi,j-i);
        i=j;
    }
    if(maxi==n){
        cout<<n*n<<endl;
        return;
    }
    if(s[0]=='1' && s[n-1]=='1'){
        int i=0;
        int cnt=0;
        while(i<n && s[i]=='1'){
            i++;
            cnt++;
        }
        int j=n-1;
        while(j>i && s[j]=='1'){
            j--,cnt++;
        }
        maxi=max(maxi,cnt);
    }
    maxi++;
    ll temp=(maxi+1)/2;
    cout<<(temp)*(maxi/2)<<endl;
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