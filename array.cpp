#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static void solve() {
    int n;
    cin >> n;

    ll prev;
    cin >> prev;

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        ll x;
        cin >> x;

        if (x < prev) {
            ans += prev - x;
        } else {
            prev = x;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}