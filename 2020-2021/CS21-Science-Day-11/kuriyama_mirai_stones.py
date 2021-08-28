"""
Kuriyama Mirai has killed many monsters and got many (namely n) stones. She numbers the stones from 1 to n. The cost of the i-th stone is vi. Kuriyama Mirai wants to know something about these stones so she will ask you two kinds of questions:

She will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
Let ui be the cost of the i-th cheapest stone (the cost that will be on the i-th place if we arrange all the stone costs in non-decreasing order). This time she will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
For every question you should give the correct answer, or Kuriyama Mirai will say "fuyukai desu" and then become unhappy.

Input
The first line contains an integer n (1 ≤ n ≤ 105). The second line contains n integers: v1, v2, ..., vn (1 ≤ vi ≤ 109) — costs of the stones.

The third line contains an integer m (1 ≤ m ≤ 105) — the number of Kuriyama Mirai's questions. Then follow m lines, each line contains three integers type, l and r (1 ≤ l ≤ r ≤ n; 1 ≤ type ≤ 2), describing a question. If type equal to 1, then you should output the answer for the first question, else you should output the answer for the second one.

Output
Print m lines. Each line must contain an integer — the answer to Kuriyama Mirai's question. Print the answers to the questions in the order of input.
"""

def get_sum_array(arr):
    sums = [0] * len(arr)
    for i in range(len(arr)):
        if i == 0:
            sums[i] = arr[i]
        else:
            sums[i] = sums[i - 1] + arr[i]
    return sums


n = int(input())
costs = list(map(int, input().split()))
costs_sorted = sorted(costs)
costs_sum_array = get_sum_array(costs)
costs_sorted_sum_array = get_sum_array(costs_sorted)
for _ in range(int(input())):
    t, l, r = map(int, input().split())
    if t == 2:
        print(costs_sorted_sum_array[r - 1] - (costs_sorted_sum_array[l - 2] if l > 1 else 0))
    else:
        print(costs_sum_array[r - 1] - (costs_sum_array[l - 2] if l > 1 else 0))
