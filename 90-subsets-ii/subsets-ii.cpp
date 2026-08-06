class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int ind=0;
        sort(nums.begin(), nums.end());
        vector<int>arr;
        vector<vector<int>>ans;
        int n= nums.size();
        sub(0,arr,nums,ans,n);
        return ans;
    }
    void sub(int ind,vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans,int n)
    {
        if (ind==n)
        {
            for(auto &v : ans)
            {
                if(v==arr)
                {
                    return;
                }
            }
            ans.push_back(arr);  
            return;
        }
        arr.push_back(nums[ind]);
        sub(ind+1,arr,nums,ans,n);
        arr.pop_back();
        sub(ind+1,arr,nums,ans,n);
    }
};