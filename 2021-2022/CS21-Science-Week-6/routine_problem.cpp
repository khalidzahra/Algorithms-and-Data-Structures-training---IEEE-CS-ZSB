#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF (1e9 + 3)
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int empty, total;
    if (c * b > a * d) {
        empty = c * b - a * d;
        total = c * b;
    } else {
        empty = a * d - c * b;
        total = a * d;
    }
    int gcd = __gcd(empty, total);
    cout << empty / gcd << "/" << total / gcd << endl;
    return 0;
}
