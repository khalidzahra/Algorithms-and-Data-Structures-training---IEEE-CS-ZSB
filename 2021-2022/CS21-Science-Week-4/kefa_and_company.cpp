#include "bits/stdc++.h"
#include <fstream>
#include <algorithm>

#define INF 1e5
#define pb push_back
#define vi vector<int>
#define vl vector<long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long>>
#define ll long long

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> f(n);
    for (int i = 0; i < n; i++) cin >> f[i].first >> f[i].second;
    int l = 0, r = 0;
    ll maxx = 0, curr = 0;
    sort(f.begin(), f.end());
    cout << endl;
    while (r < n) {
        while (f[r].first - f[l].first >= d) {
            curr -= f[l].second;
            l++;
        }
        curr += f[r].second;
        maxx = max(maxx, curr);
        r++;
    }
    maxx = max(maxx, curr);
    cout << maxx << endl;
    return 0;
}