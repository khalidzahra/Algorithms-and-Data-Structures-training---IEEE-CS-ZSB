void findCombinations(vector<string> &res, string &digits, int index, string currString, unordered_map<char, string> &m) {   
    if (index >= digits.length()) {
        if (currString.length() > 0) res.push_back(currString);
        return;
    }
    for (char c : m[digits[index]]) findCombinations(res, digits, index + 1, currString + c, m);   
}
    
vector<string> letterCombinations(string digits) {
    unordered_map<char, string> m = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> res;
    findCombinations(res, digits, 0, "", m);
    return res;
}