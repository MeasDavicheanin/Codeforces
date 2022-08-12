#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) 
	{
		int count = 0;
		int len; cin >> len;
		string word; cin >> word;
		set<char>set_c;
		for (int i = 0; i<word.length(); i++) 
		{
			if (set_c.find(word[i]) == set_c.end()) 
			{
				set_c.insert(word[i]);
				count += 2;
			}
			else {
				count += 1;
			}

		}
		cout << count << endl;
	}
	return 0;
}