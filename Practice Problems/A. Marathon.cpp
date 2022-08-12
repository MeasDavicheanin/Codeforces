#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int count = 0;
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (b > a) {
			count += 1;
		}
		if (c > a) {
			count += 1;
		}
		if (d > a) {
			count += 1;
		}
		cout << count << endl;
	}

	return 0;
}