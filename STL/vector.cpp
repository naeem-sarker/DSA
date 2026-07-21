#include <bits/stdc++.h>
using namespace std;

void solve() {
	vector<int> v1;
	vector<int> v2(5, 1);

	for(int v: v2) {
		cout << v << " ";
	}

	cout << endl;
	vector<int> v3 = {1, 2, 3};
	for(int v: v3) {
		cout << v << " ";
	}
	cout << endl;

	v3.push_back(4);
	v3.insert(v3.begin() + 1, 99);
	for(int v: v3) {
		cout << v << " ";
	}

	cout << endl;
	cout << v3.at(3) << endl;
	cout << v3[3] << endl;

	v3[3] = 101;
	cout << v3.size() << endl;
	cout << boolalpha << v3.empty() << endl;
	v3.pop_back();

	v3.erase(find(v3.begin(), v3.end(), 1));

	for(int v: v3) {
		cout << v << " ";
	}
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	solve();
}