//
// Created by DaiThang on 28,09,2026.
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static void solve() {
    ll n;
    cin >> n;

    ll x, sum = 0;
    for (int i= 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }
    ll ans = n * (n + 1) / 2;
    cout << ans - sum << '\n';
}

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(nullptr);
    ll n;
    solve();
}