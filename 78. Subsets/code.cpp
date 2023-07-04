class Solution {
public:

    void sets(vector<int> nums, vector<int> input, int index, vector<vector<int>>& ans){
        if(index==nums.size()){
            ans.push_back(input);
            return;
        }

        sets(nums, input, index+1, ans);

        input.push_back(nums[index]);

        sets(nums, input, index+1, ans);

        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> input;
        int index=0;

        sets(nums,input,index,ans);
        
        return ans;
    }
};
