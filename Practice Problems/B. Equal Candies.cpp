#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>vi;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			vi.push_back(num);
		}
		int min_ele = *min_element(vi.begin(),vi.end());
		for (int i = 0; i < vi.size(); i++) {
			sum += vi[i] - min_ele;
		}
		cout << sum << endl;

	}
	return 0;
}