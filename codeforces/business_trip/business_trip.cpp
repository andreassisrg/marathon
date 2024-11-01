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
	int k; cin >> k;
	if (k == 0) { cout << "0" << endl; return 0; }
	
	priority_queue<int> meses;
	int ai;
	while (cin >> ai) {
		meses.push(ai);
	}

	int n_min = 0;
	while (k > 0) {
		if (meses.empty()) { cout << -1 << endl; return 0; }

		ai = meses.top();
		k -= ai;
		meses.pop();
		n_min++;
	}
	cout << n_min << endl;	

	return 0;

}

