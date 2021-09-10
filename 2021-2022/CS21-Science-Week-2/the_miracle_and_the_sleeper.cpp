/*

    You are given two integers l and r, l≤r. Find the largest possible value of amodb over all pairs (a,b) of integers for which r≥a≥b≥l.

    As a reminder, amodb is a remainder we get when dividing a by b. For example, 26mod8=2.

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
        ll l, r;
        cin >> l >> r;
        ll den = r / 2 + 1;
        den = den < l ? l : den;
        cout << r % den << endl;
    }
    return 0;
}

