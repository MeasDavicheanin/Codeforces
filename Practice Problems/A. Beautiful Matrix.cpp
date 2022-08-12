#include<bits/stdc++.h>
using namespace std;
int main() {
	int idex, jdex;
	int ans;
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			int num;
			cin >> num;
			if (num == 1) {
				idex = i;
				jdex = j;
			}
		}
	}
	ans = abs(idex - 3) + abs(jdex - 3);
	cout << ans;
	return 0;
}