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
	ll n; cin >> n;
	vector<pair<int, int>> botas(61, {0, 0});	
	while (n--) {
		int m; char l; cin >> m >> l;
		if (l == 'E') botas[m].f++;
		else botas[m].s++;
	}
	ll ans = 0;
	for (auto& p : botas) {
		ans += min(p.f, p.s);
	}
	cout << ans << endl;	

	return 0;
}

