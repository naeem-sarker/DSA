#include <bits/stdc++.h>
using namespace std;

void solve() {
	array<int, 5> arr = {1, 2, 9, 4, 3};
	array<int, 5> a = {1, 2, 3, 4, 5};
	array<int, 5> b = {10, 11, 12, 13, 14};

	sort(arr.begin(), arr.end());
	for(int v: arr) {
		cout << v << " ";
	}
	cout << endl;

	cout << arr.at(2) << endl;
	cout << arr[2] << endl;
	cout << arr.front() << endl;
	cout << arr.back() << endl;
	cout << arr.size() << endl;
	cout << arr.max_size() << endl;

	a.swap(b);
	for(int v: a) {
		cout << v << " ";
	}
	cout << endl;

	cout << boolalpha << arr.empty() << endl;

	arr.fill(10);
	for(int v: arr) {
		cout << v << " ";
	}

	int *p = arr.data();
}

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	solve();
}