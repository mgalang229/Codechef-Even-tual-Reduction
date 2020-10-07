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
		char a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		sort(a, a+n);
		bool ok=1;
		int cnt=1;
		for(int i=1; i<n; ++i) {
			if(a[i]==a[i-1])
				cnt++;
			else {
				ok=(cnt%2==0?1:0);
				cnt=1;
			}
			if(!ok)
				break;
		}
		ok=(cnt%2==0?1:0);
		cout << (ok?"YES":"NO") << "\n";
	}
}
