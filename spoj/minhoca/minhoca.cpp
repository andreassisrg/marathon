#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N, M;
	cin >> N >> M;
	long long matrix[N][M];
	long long biggest_row = 0;
	long long biggest_col = 0;
	long long x;

	for (int i = 0; i < N; i++) {
		x = 0;
		for (int j = 0; j < M; j++) {
			cin >> matrix[i][j];
			
			x += matrix[i][j];
		}
		if (x > biggest_col) { biggest_col = x; }
	}

	for (int i = 0; i < M; i++) {
		x = 0;
		for (int j = 0; j < N; j++) {
			x += matrix[j][i];
		}
		if (x > biggest_row) { biggest_row = x; }
	}

	if (biggest_row > biggest_col) { cout << biggest_row << endl; }
	else { cout << biggest_col << endl; }

	return 0;
}

