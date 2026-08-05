class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        vector<vector<int>> ans;

        sub(0, arr, nums, n, ans);

        return ans;
    }

    void sub(int ind, vector<int>& arr, vector<int>& nums, int n, vector<vector<int>>& ans)
    {
        if (ind == n)
        {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        sub(ind + 1, arr, nums, n, ans);
        arr.pop_back();
        sub(ind + 1, arr, nums, n, ans);
    }
};