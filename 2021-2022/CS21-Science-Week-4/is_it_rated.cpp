#include <bits/stdc++.h>

#define pii pair<int, int>
#define pll pair<long, long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ll long long
#define pb push_back
#define INF 1e8

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = INF;
    bool inOrder = true, hasChanged = false;
    for (int i = 0; i < n; i++) {
        int at, bt;
        cin >> at >> bt;
        if (a < at) inOrder = false;
        if (at != bt) hasChanged = true;
        a = at;
    }
    if (hasChanged) cout << "rated" << endl;
    else if (!inOrder && !hasChanged) cout << "unrated" << endl;
    else cout << "maybe" << endl;
    return 0;
}