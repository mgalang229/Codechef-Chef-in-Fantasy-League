#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;
		int p[n];
		for(int i=0; i<n; ++i)
			cin >> p[i];
		int p2[n];
		for(int i=0; i<n; ++i)
			cin >> p2[i];
		bool ok=0;
		for(int i=0; i<n; ++i) {
			int n1=0, n2=0;
			if(p2[i]==0) {
				n1=p[i];
				for(int j=0; j<n; ++j) {
					if(p2[j]==1)
						n2=p[j];
					if(s+n1+n2<=100&&n2!=0) {
						ok=1;
						break;
					}
				}
			} else {
				n1=p[i];
				for(int j=0; j<n; ++j) {
					if(p2[j]==0)
						n2=p[j];
					if(s+n1+n2<=100&&n2!=0) {
						ok=1;
						break;
					}
				}
			}
			if(ok)
				break;
		}
		cout << (ok ? "yes" : "no") << "\n";
	}
}
