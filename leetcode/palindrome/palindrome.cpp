#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for (int i = 0, len = s.size() - 1; i <= floor(len); i++) {
            if (s[i] != s[len - i])
                return false;
        }
        return true;
    }
};
