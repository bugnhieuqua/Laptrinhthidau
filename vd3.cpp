#include<bits/stdc++.h>

using namespace std;

#define sz(x) ((int)(x.size()))
static void solve() {

    string s;
    cin >> s;


    char cur_char = s[0];

    int cur_len = 1,
        max_len = 1;

    for (int i = 1; i < sz(s); i++) {
        if (s[i] == cur_char) {
            cur_len++;
        }else {
            cur_len = 1;
            cur_char= s[i];
        }
        max_len = max(max_len, cur_len);
    }
    cout << max_len << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}