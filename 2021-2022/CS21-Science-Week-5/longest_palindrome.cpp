    pair<int, int> findPalindrome(string &s, int l, int r) {
        if (s[l] != s[r]) return make_pair(0, 0);
        pair<int, int> longest = {l, r};
        while (l - 1 >= 0 && r + 1 < s.length() && s[l - 1] == s[r + 1]) {
            l--;
            r++;
            if (r - l > longest.second - longest.first) longest = {l, r};
        }
        return longest;
    }
    
    string longestPalindrome(string s) {
        pair<int, int> longest = {0, 0};
        for (int i = 0; i < s.length() - 1; i++) {
            pair<int, int> odd = findPalindrome(s, i, i);
            pair<int, int> even = findPalindrome(s, i, i + 1);
            if (odd.second - odd.first > longest.second - longest.first) longest = odd;
            if (even.second - even.first > longest.second - longest.first) longest = even;
        }
        return s.substr(longest.first, longest.second - longest.first + 1);
    }