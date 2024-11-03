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
		pair<ll, ll> coord_inicial = {0, 0}, coord_final = {0, 0};
		set<pair<pair<ll, ll>, pair<ll, ll>>> caminhos;
		pair<pair<ll, ll>, pair<ll, ll>> curr;
		string s; cin >> s;
		ll ans = 0;
		for (char& c : s) {
			if (c == 'E') coord_final.f++;
			else if (c == 'W') coord_final.f--;
			else if (c == 'N') coord_final.s++;
			else coord_final.s--;

			curr.f = coord_inicial; curr.s = coord_final;

			if (caminhos.count(curr) == 0) {
				ans += 5;
				caminhos.insert(curr); swap(curr.s, curr.f); caminhos.insert(curr);
			}
			else {
				ans++;
			}

			coord_inicial = coord_final;
		}
		cout << ans << endl;	
	}	

	return 0;
}

