#include <bits/stdc++.h>
using namespace std;

int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int BinSearch(int l, int h, int key) {
	if(l > h) {
		return -1;
	}

	int mid = (l+h)/2;
	if(key == A[mid]) {
		return mid;
	}
	else if(key < A[mid]) {
		return BinSearch(l, mid-1, key);
	}
	else {
		return BinSearch(mid+1, h, key);
	}
}

void solve() {
	cout << BinSearch(0, 9, 8);
}

int main() {
	solve();
}