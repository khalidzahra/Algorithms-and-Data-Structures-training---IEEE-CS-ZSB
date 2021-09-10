/*

    There are n squares arranged in a row, and each of them can be painted either red or blue.

    Among these squares, some of them have been painted already, and the others are blank. You can decide which color to paint on each blank square.

    Some pairs of adjacent squares may have the same color, which is imperfect. We define the imperfectness as the number of pairs of adjacent squares that share the same color.

    For example, the imperfectness of "BRRRBBR" is 3, with "BB" occurred once and "RR" occurred twice.

    Your goal is to minimize the imperfectness and print out the colors of the squares after painting.

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
        string s;
        int n;
        cin >> n >> s;
        vector<char> c(s.size());
        for (int i = 0; i < s.size(); i++) c[i] = s[i];
        int count = 0;
        for (int i = 0; i < c.size(); i++) {
            if (c[i] != '?') {
                count++;
                for (int j = i + 1; j < c.size(); j++) {
                    if (c[j] != '?') break;
                    c[j] = c[j - 1] == 'R' ? 'B' : 'R';
                }
                for (int j = i - 1; j > -1; j--) {
                    if (c[j] != '?') break;
                    c[j] = c[j + 1] == 'R' ? 'B' : 'R';
                }
            }
        }
        if (!count) {
            for (int i = 0; i < c.size(); i++) {
                c[i] = i % 2 == 0 ? 'B' : 'R';
            }
        }
        for (int i = 0; i < c.size(); i++) cout << c[i];
        cout << endl;
    }
    return 0;
}

