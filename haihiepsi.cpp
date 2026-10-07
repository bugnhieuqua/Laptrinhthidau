//
// Created by DaiThang on 03,10,2026.
//
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

static void solve() {
    int n;
    cin >> n;
    for (ll k = 1; k <= n; k++) {
        ll total = (k * k) * ((k * k ) - 1)/2;
        ll attack = 4 * (k - 1) * (k - 2);
        ll ans = total - attack;
        cout << ans << '\n';
    }

}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

}
