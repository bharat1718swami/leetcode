class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans=0;
        
        int n=nums.size();
        
        while(n){
            ans=ans^nums[n-1];
            n--;
        }
        
        return ans;
        
    }
};
