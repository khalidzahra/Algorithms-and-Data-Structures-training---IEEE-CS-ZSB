"""
Panic is rising in the committee for doggo standardization — the puppies of the new brood have been born multi-colored! In total there are 26 possible colors of puppies in the nature and they are denoted by letters from 'a' to 'z' inclusive.

The committee rules strictly prohibit even the smallest diversity between doggos and hence all the puppies should be of the same color. Thus Slava, the committee employee, has been assigned the task to recolor some puppies into other colors in order to eliminate the difference and make all the puppies have one common color.

Unfortunately, due to bureaucratic reasons and restricted budget, there's only one operation Slava can perform: he can choose a color x such that there are currently at least two puppies of color x and recolor all puppies of the color x into some arbitrary color y. Luckily, this operation can be applied multiple times (including zero).

For example, if the number of puppies is 7 and their colors are represented as the string "abababc", then in one operation Slava can get the results "zbzbzbc", "bbbbbbc", "aaaaaac", "acacacc" and others. However, if the current color sequence is "abababc", then he can't choose x='c' right now, because currently only one puppy has the color 'c'.

Help Slava and the committee determine whether it is possible to standardize all the puppies, i.e. after Slava's operations all the puppies should have the same color.

Input
The first line contains a single integer n (1≤n≤105) — the number of puppies.

The second line contains a string s of length n consisting of lowercase Latin letters, where the i-th symbol denotes the i-th puppy's color.

Output
If it's possible to recolor all puppies into one color, print "Yes".

Otherwise print "No".

Output the answer without quotation signs.
"""

def can_standardize(colors, n):
    if n == 1:
        return "Yes"
    not_enough_to_recolor = 0
    for i in colors:
        if 0 < i < 2:
            not_enough_to_recolor += 1
    return "Yes" if not_enough_to_recolor < n else "No"


n, s = int(input()), input()
colors = [0] * 26
for c in s:
    colors[ord(c) - 97] += 1
print(can_standardize(colors, n))
