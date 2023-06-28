class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        int ans=-1,j=0;

        for(int i=1;i<nums.size();i++){
            if(nums[j]<nums[i]&&(nums[i]-nums[j])>ans){
                ans=nums[i]-nums[j];
            }
            else if(nums[j]>=nums[i]){
                j=i;
            }
        }

        return ans;
        
    }
};
