class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int ans=0;
        int i=0;
        while(i<nums.size()){
            if(sum+nums[i]>=target){
                sum+=nums[i];
                i++;
                ans=i;
                break;
            }
            sum+=nums[i];
            i++;
        }

        // int temp=ans;
        int j=0;

        for(;j<nums.size();){
            if(sum>=target){
                // cout<<i<<" "<<j;
                int temp=i-j;
                // cout<<ans<<" ";
                ans=min(ans,temp);
                sum-=nums[j];
                j++;
            }

            else{
                if(i<nums.size()){
                sum+=nums[i];
                i++;
                }
                else break;
            }
        }

        return ans;
        
    }
};
