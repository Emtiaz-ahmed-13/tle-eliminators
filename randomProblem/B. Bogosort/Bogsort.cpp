#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long> a(n);
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.rbegin(),a.rend());

		for(auto ele:a){
			cout<<ele<<" ";
		}
		cout<<endl;
	}
	return 0;
}