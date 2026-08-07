class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        vector<vector<int>>ans;
        findcomb(0,target,candidates,arr,ans);
        return ans;
    }
    void findcomb(int ind,int target,vector<int>&a,vector<int>&arr,vector<vector<int>>&ans)
    {
        if(ind==a.size()) //preventing it from going above array size
        {
            if(target==0) //to push the current seq "arr" into ans , target should be 0 
            {
                ans.push_back(arr);
                return;
            }
            else return;
        }
        if(a[ind]<=target) //inorder to push an element into arr vector , it needs to be <=targrt value.
        {
            arr.push_back(a[ind]);
            findcomb(ind,target-a[ind],a,arr,ans); // pick case , we are picking same index so taget reduces by it and ind doesnt change
            arr.pop_back(); // since pick case is done here , pop it to perforn "not pick" case
        }
        findcomb(ind+1,target,a,arr,ans); // since ur not picking index moves to next, target doesnt change
    }
};