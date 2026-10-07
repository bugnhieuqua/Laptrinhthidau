// //
// // Created by DaiThang on 03,10,2026.
// //
// #include<bits/stdc++.h>
//
// using namespace std;
//
// using ll= long long;
//
// static void solve() {
//     int t;
//     cin >> t;
//
//     while (t--) {
//         ll y, x;
//         cin >> y >> x;
//
//         ll z = max(y, x);
//         ll ans = 0;
//         if (z % 2 == 1) {
//             if (x == z ) {
//                 ans = (z * z) - (y -1);
//             }else {
//                 ans = (z -1) * (z - 1) + x;
//             }
//         }else {
//             if (y == z) {
//                 ans = (z * z) - (x -1);
//             }else {
//                 ans = (z -1) * (z - 1) + y;
//             }
//         }
//         cout << ans << '\n';
//     }
// }
//
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        ll y, x;
        cin >> y >> x;

        ll z = max(y, x);
        ll ans = 0;
        if (z % 2 == 1) {
            if (x == z ) {
                ans = (z * z) - (y -1);
            }else {
                ans = (z -1) * (z - 1) + x;
            }
        }else {
            if (y == z) {
                ans = (z * z) - (x -1);
            }else {
                ans = (z -1) * (z - 1) + y;
            }
        }
        cout << ans << '\n';
    }
}