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
	int n; cin >> n;
	set<int> s1;
	while (n--) {int a; cin >> a; s1.insert(a);}
	int m; cin >> m;
	set<int> s2;
	while (m--) {int b; cin >> b; s2.insert(b);}
	for (auto e1 : s1) {
		for (auto e2 : s2) {
			if (s1.count(e1+e2) == 0 && s2.count(e1+e2) == 0) {
				cout << e1 << " " << e2 << endl;
				return 0;
			} 
		}
	}
	return 0;
}

