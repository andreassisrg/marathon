#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

string operator*(string s, ll count) {
	string ans;
	while (count--) { ans = ans + s; }
	return ans;
}

int main() { _
	int n; cin >> n;
	vector<ll> v(2, 0);
	while (n--) {
		char c; cin >> c;
		if (c == 'z') v[0]++;
		if (c == 'n') v[1]++;
	}
	string ones = "1 "; ones = ones * v[1];
	string zeros = "0 "; zeros = zeros * v[0];
	cout << ones + zeros << endl;
	return 0;
}

