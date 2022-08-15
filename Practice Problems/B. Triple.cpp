#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		map<int, int>mp;
		int ans = -1;
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			mp[num]++;
			if (mp[num] >= 3) {
				ans = num;
			}
		}
		cout << ans << endl;
	}
	return 0;

}