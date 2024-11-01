#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t; cin >> t;
	long long a, b, x, y;

	while (t--) {
		cin >> a >> b >> x >> y;

		long long a1, a2, a3, a4;
		a1 = (a - x - 1) * (b);
		a2 = (a) * (b - y - 1);
		a3 = (a) * (y);
		a4 = (b) * (x);

		long long l1;
		if (a1 > a2) { l1 = a1; }
		else { l1 = a2; }

		long long l2;
		if (a3 > a4) { l2 = a3; }
		else { l2 = a4; }

		if (l1 > l2) { cout << l1 << '\n'; }
		else { cout << l2 << '\n'; }
	}

	return 0;
}

