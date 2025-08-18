#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    while (true) {
        int x;
        cin >> x;
        if (x == -1) break;
        vec.push_back(x);
    }

    int n = vec.size();
    cout << n << endl; 

    for (int i = n-1; i >= 0; i--) {
        cout << vec[i] << " ";
    }
    cout << endl; 

    cout << "OUTPUT" << endl; 
}
