#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	long long X;
	bool is_prime;

	for (int i = 0; i < N; i++) {
		cin >> X;
		is_prime = true;

		for (int j = 2; j*j <= X; j++) {
			if (X % j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) { cout << "Prime" << endl; }
		else { cout << "Not Prime" << endl; }
	}

	return 0;
}

