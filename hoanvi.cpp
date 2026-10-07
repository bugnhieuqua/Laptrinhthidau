//
// Created by DaiThang on 03,10,2026.
//
#include<bits/stdc++.h>

using namespace std;

using ll= long long;
static void solve() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return;
    }
    if (n == 1) {
        cout << "1";
        return;
    }
    for (int i = 2; i <= n; i+=2 ) {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i+=2 ) {
        cout << i << " ";
    }



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}