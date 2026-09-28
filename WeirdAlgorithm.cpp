//
// Created by DaiThang on 28,09,2026.
//
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

static void solve() {
    ll n;
    cin >> n;
    while (true) {

        cout << n << ' ';
        if (n == 1) break;

        if (n % 2 == 0) {
            n = n/2;
        }else {
            n = 3 * n + 1;
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    solve();

}