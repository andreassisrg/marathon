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
	int t; cin >> t;
	string proibida, bracelete;
	bool forward, backwards;
	ll b_len, p_len;
	while (t--) {
		cin >> proibida >> bracelete;
		forward = false; backwards = false;
		b_len = ll(bracelete.length());
		p_len = ll(proibida.length());
		
		for (ll i = 0; i < b_len; i++) {
			if (proibida.at(0) == bracelete.at(i)) {
				forward = true; backwards = true;
				for (ll j = 0, f = 0, b = 0; j < p_len; j++) {
					if (i+j-(f*b_len) > b_len-1) { f++; }
					if (proibida.at(j) != bracelete.at(i+j-(f*b_len))) { forward = false; }
					
					if (i-j+(b*b_len) < 0) { b++; }
					if (proibida.at(j) != bracelete.at(i-j+(b*b_len))) { backwards = false; }
				}
			}
			if (forward || backwards) { cout << "S" << endl; break; }
		}
		if (!forward && !backwards) { cout << "N" << endl; }
	}	
	return 0;
}

