#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
	int p; cin >> p;
	string palavra;
	bool ordenada;
	while (p--) {
		ordenada = true;
		cin >> palavra;
		for (int i = 0, n = palavra.length() - 1; i < n; i++) {
			if (tolower(palavra[i+1]) <= tolower(palavra[i])) {
				ordenada = false;
				cout << palavra << ": N" << endl;
				break;
			}
		}
		if (ordenada) { cout << palavra << ": O" << endl; }
	}	

	return 0;

}

