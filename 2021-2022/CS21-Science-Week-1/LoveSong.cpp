//
// Created by khalid on 8/28/21.
//

/**
 Petya once wrote a sad love song and shared it to Vasya.
 The song is a string consisting of lowercase English letters.
 Vasya made up q questions about this song. Each question is about a subsegment of the song starting from the l-th letter to the r-th letter.
 Vasya considers a substring made up from characters on this segment and repeats each letter in the subsegment k times, where k is the index of the corresponding letter in the alphabet.
 For example, if the question is about the substring "abbcb", then Vasya repeats letter 'a' once, each of the letters 'b' twice, letter 'c" three times, so that the resulting string is "abbbbcccbb", its length is 10.
 Vasya is interested about the length of the resulting string.
 */

#include "LoveSong.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void loveSong() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> lengths(s.length());
    lengths[0] = s[0] - 96;
    for (int i = 1; i < s.length(); i++) lengths[i] = lengths[i - 1] + s[i] - 96;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << (l - 2 >= 0 ? lengths[r - 1] - lengths[l - 2] : lengths[r - 1]) << endl;
    }
}