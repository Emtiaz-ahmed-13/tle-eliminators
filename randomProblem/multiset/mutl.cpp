#include<bits/stdc++.h>
using namespace std;


int main(){
	set<int>st;
	st.insert(5);
	st.insert(7);
	st.insert(9);
	st.insert(5);
	st.insert(7);
	st.insert(2);
	st.insert(20);
	for(auto data:st){
		cout<<data <<endl; 
	}
	st.erase(5);
	cout<<"======== After erasing 5.........."<<endl;
	for(auto data:st){
		cout<<data <<endl;
	}
	if(st.count(2)==1){
		cout<<"========== 5 in a set ........"<<endl;
	}
	else{
		cout<<"=========== 5 not in the set ....."<<endl;
	}
	auto it=st.begin();
	cout <<"======= first value off set " << *it <<endl;
}












