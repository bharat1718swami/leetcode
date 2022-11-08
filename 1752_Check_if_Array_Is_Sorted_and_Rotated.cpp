class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        
        int in=0,de=0;
        
         if(nums[0]<nums[n-1]) de++;
        
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                de++;
            }
            
            if(de>1) return false;
        }
        
        return true;
        
    }
};
