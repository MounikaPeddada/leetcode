class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>arr;
        findcomb(0,target,candidates,arr,ans);
        return ans; 
    }
    void findcomb(int ind,int target,vector<int>&a,vector<int>&arr,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<a.size();i++)
        {
            if(i>ind && a[i]==a[i-1]) continue;
            if(a[i]>target) break;
            arr.push_back(a[i]);
            findcomb(i+1,target-a[i],a,arr,ans);
            arr.pop_back();
        }
    }
};