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
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];
    int largest = 1;
    for (int i = 0; i < n; i++) {
        int l = i - 1, r = i + 1, curr = 1;
        bool left = true, right = true;
        while (l >= 0 || r < n) {
            if (left) left = (r < n && heights[r] <= heights[i] && heights[r] <= heights[r - 1]);
            if (right) right = (l >= 0 && heights[l] <= heights[i] && heights[l] <= heights[l + 1]);
            curr += left + right;
            l--;
            r++;
        }
        largest = max(largest, curr);
    }
    cout << largest << endl;
    return 0;
}
