#include<bits/stdc++.h>
using namespace std;
int cost(string a, string b) 
{
	int value = 0;
	for (int i = 0; i < a.size(); i++) {
		value+=abs(a[i] - b[i]);
	}
	return value;
	
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		vector<string>s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) 
		{
			for (int j = i+1; j < n; j++) 
			{
				int cal = cost(s[i], s[j]);
				if (cal < ans) {
					ans = cal;
				}
			}
		}
		cout << ans << endl;
	
	}
	return 0;
}