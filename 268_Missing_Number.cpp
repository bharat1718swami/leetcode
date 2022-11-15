class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n=nums.size();
        
        int ans=0,i=0;
        
        for(i=0;i<n;i++){
            ans=ans^nums[i];
            ans=ans^i;
        }
        
        return ans^i;
        
    }
};
