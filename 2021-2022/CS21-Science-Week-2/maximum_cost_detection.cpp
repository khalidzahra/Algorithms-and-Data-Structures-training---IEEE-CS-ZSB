/*

    You are given a string s of length n consisting only of the characters 0 and 1.

    You perform the following operation until the string becomes empty: choose some consecutive substring of equal characters, erase it from the string and glue the remaining two parts together (any of them can be empty) in the same order. For example, if you erase the substring 111 from the string 111110, you will get the string 110. When you delete a substring of length l, you get a⋅l+b points.

    Your task is to calculate the maximum number of points that you can score in total, if you have to make the given string empty.

*/

#include "bits/stdc++.h"

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
    for (int i = 0; i < t; i++) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ans = a * s.size();
        if (b > 0) {
            ans += b * s.size();
        } else {
            int ones = 0, zeros = 0;
            if (s[0] == '1') ones++;
            else zeros++;
            for (int i = 0; i < s.size() - 1; i++) {
                if (s[i] != s[i + 1]) {
                    if (s[i + 1] == '1') ones++;
                    else zeros++;
                }
            }
            if (zeros == 0 || ones == 0) {
                ans += b;
            } else {
                ans += b * (min(ones, zeros)) + b;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

