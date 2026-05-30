class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> &curr,vector<int> &nums,int index){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        backtrack(curr,nums,index+1);
        curr.pop_back();
        backtrack(curr,nums,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        backtrack(curr,nums,0);
        return ans;
    }
};
