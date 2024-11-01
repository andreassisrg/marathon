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
	int t; cin >> t;
	while (t--)
	{
		string a, b, c; cin >> a >> b >> c;
		bool eh_transformavel = true;
		for (int j = 0, n = a.length(); j < n; j++)
		{
			if (c[j] == a[j]) {
				b[j] = c[j];
			}
			else if (c[j] == b[j]) {
				a[j] = c[j];
			}
			else {
				eh_transformavel = false;
				cout << "NO" << endl;
				break;
			}
		}
		if (eh_transformavel)
			cout << "YES" << endl;
	}	

	return 0;

}

