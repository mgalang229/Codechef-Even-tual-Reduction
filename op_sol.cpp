#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int m=0;
		for(auto c : s)
			m^=1<<(c-'a');
		cout << (m==0?"YES":"NO") << "\n";
	}
}
