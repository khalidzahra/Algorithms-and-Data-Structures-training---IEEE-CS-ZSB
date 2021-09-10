/*

    Polycarp must pay exactly n burles at the checkout. He has coins of two nominal values: 1 burle and 2 burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.

    Thus, Polycarp wants to minimize the difference between the count of coins of 1 burle and 2 burles being used. Help him by determining two non-negative integer values c1 and c2 which are the number of coins of 1 burle and 2 burles, respectively, so that the total value of that number of coins is exactly n (i. e. c1+2⋅c2=n), and the absolute value of the difference between c1 and c2 is as little as possible (i. e. you must minimize |c1−c2|).

*/

#include "bits/stdc++.h"

#define INF 1e8
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long n;
        cin >> n;
        int y, x = y = n / 3;
        if (n % 3 == 1) y++;
        if (n % 3 == 2) x++;
        cout << y << " " << x << endl;
    }
    return 0;
}

