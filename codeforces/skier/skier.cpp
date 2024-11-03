#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
typedef unsigned long long ull;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
	ll t; cin >> t;
	while (t--) {
		pair<ll, ll> horizontal(0,0);
		pair<ll, ll> vertical(0,0);
		string s; cin >> s;
		for (char c : s) {
			if (c == 'N') vertical.f++;
			else if (c == 'S') vertical.s++;
			else if (c == 'W') horizontal.f++;
			else if (c == 'E') horizontal.s++;
		}
		int ans = 5*(max(horizontal.f, horizontal.s)) + min(horizontal.f, horizontal.s);
		ans += 5*(max(vertical.f, vertical.s)) + min(vertical.f, vertical.s);
		cout << ans << endl;
	}	

	return 0;
}

