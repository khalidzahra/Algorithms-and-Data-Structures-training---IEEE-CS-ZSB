/*

    Moamen has an array of n distinct integers. He wants to sort that array in non-decreasing order by doing the following operations in order exactly once:

    Split the array into exactly k non-empty subarrays such that each element belongs to exactly one subarray.
    Reorder these subarrays arbitrary.
    Merge the subarrays in their new order.
    
    A sequence a is a subarray of a sequence b if a can be obtained from b by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

    Can you tell Moamen if there is a way to sort the array in non-decreasing order using the operations written above?

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
        long n, k;
        cin >> n >> k;
        vl srt, nums;
        vl starts;
        unordered_map<long, long> rels;
        for (int i = 0; i < n; i++) {
            long num;
            cin >> num;
            nums.pb(num);
            srt.pb(num);
        }
        sort(srt.begin(), srt.end());
        for (int i = 0; i < srt.size() - 1; i++) rels[srt[i]] = srt[i + 1];
        rels[srt[srt.size() - 1]] = INF;
        long sec = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == n-1 && rels[nums[i]] != INF) sec++;
            else if (rels[nums[i]] != nums[i + 1]) sec++;
        }
        cout << (sec <= k ? "Yes" : "No") << endl;
    }
    return 0;
}

