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
    int n, a;
    cin >> n >> a;
    vector<int> cities(n);
    for (int i = 0; i < n; i++) cin >> cities[i];
    int l = a - 2, r = a, count = cities[a - 1];
    while (l >= 0 || r < n) {
        if (l < 0) count += cities[r];
        else if (r >= n) count += cities[l];
        else if (cities[l] && cities[r]) count += 2;
        l--;
        r++;
    }
    cout << count << endl;
    return 0;
}
