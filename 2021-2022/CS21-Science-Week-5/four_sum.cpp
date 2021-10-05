vector<vector<int>> fourSum(vector<int>& nums, int target) {
    set<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            int sum = target - nums[i] - nums[j], l = j + 1, r = nums.size() - 1;
            while (l < r) {
                if (sum > nums[l] + nums[r]) l++;
                else if (sum < nums[l] + nums[r]) r--;
                else if (sum == nums[l] + nums[r]) {
                    result.insert({nums[i], nums[j], nums[l], nums[r]});
                     l++;
                }
            }
        }
    }
    return vector<vector<int>>(result.begin(), result.end());
}