#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t; cin >> t;
	while (t--) {
		vector<int>vi;
		int item; cin >> item;
		for (int i = 0; i < item; i++) {
			int num; cin >> num;
			vi.push_back(num);
		}
		for (int i = 0; i < vi.size(); i++) {
			int sub; cin >> sub;
			string word; cin >> word;
			int chnage = 0;
			for (int j = 0; j < word.size(); j++) {
				if (word[j] == 'U') 
				{
					vi[i] -= 1;
					if (vi[i] < 0) {
						vi[i] = 9;
					}
				}
				if (word[j] == 'D')
				{
					vi[i] += 1;
					if (vi[i] > 9) {
						vi[i] = 0;
					}
				}
			}

		}
		for (int i = 0; i < vi.size(); i++) {

			cout << vi[i]<<" ";
		}
		cout << endl;
	}
}