/*

    Monocarp and Polycarp are learning new programming techniques. Now they decided to try pair programming.

    It's known that they have worked together on the same file for n+m minutes. Every minute exactly one of them made one change to the file. Before they started, there were already k lines written in the file.

    Every minute exactly one of them does one of two actions: adds a new line to the end of the file or changes one of its lines.

    Monocarp worked in total for n minutes and performed the sequence of actions [a1,a2,…,an]. If ai=0, then he adds a new line to the end of the file. If ai>0, then he changes the line with the number ai. Monocarp performed actions strictly in this order: a1, then a2, ..., an.

    Polycarp worked in total for m minutes and performed the sequence of actions [b1,b2,…,bm]. If bj=0, then he adds a new line to the end of the file. If bj>0, then he changes the line with the number bj. Polycarp performed actions strictly in this order: b1, then b2, ..., bm.

    Restore their common sequence of actions of length n+m such that all actions would be correct — there should be no changes to lines that do not yet exist. Keep in mind that in the common sequence Monocarp's actions should form the subsequence [a1,a2,…,an] and Polycarp's — subsequence [b1,b2,…,bm]. They can replace each other at the computer any number of times.

    Let's look at an example. Suppose k=3. Monocarp first changed the line with the number 2 and then added a new line (thus, n=2,a=[2,0]). Polycarp first added a new line and then changed the line with the number 5 (thus, m=2,b=[0,5]).

    Since the initial length of the file was 3, in order for Polycarp to change line number 5 two new lines must be added beforehand. Examples of correct sequences of changes, in this case, would be [0,2,0,5] and [2,0,0,5]. Changes [0,0,5,2] (wrong order of actions) and [0,5,2,0] (line 5 cannot be edited yet) are not correct.

 */


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
    int t;
    cin >> t;
    for (int _ = 0; _ < t; _++) {
        string s;
        getline(cin, s);
        int k, n, m;
        cin >> k >> n >> m;
        vi a(n), b(m), o(n + m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        int ai = 0, bi = 0;
        bool possible = true;
        for (int i = 0; i < n + m; i++) {
            if ((ai < a.size() && bi < b.size() && a[ai] > k && b[bi] > k) ||
                (bi < b.size() && b[bi] > k && ai >= a.size()) || (ai < a.size() && a[ai] > k && bi >= b.size())) {
                possible = false;
                break;
            }
            if (ai < a.size()) {
                if (a[ai] > k) {
                    o[i] = b[bi];
                    bi++;
                } else {
                    o[i] = a[ai];
                    ai++;
                }
            } else {
                o[i] = b[bi];
                bi++;
            }
            if (o[i] == 0) k++;
        }
        if (!possible) {
            cout << -1 << endl;
        } else {
            for (auto &el : o) cout << el << " ";
            cout << endl;
        }
    }
    return 0;
}

