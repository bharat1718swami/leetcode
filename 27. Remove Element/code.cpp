class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        int n=nums.size();
        int j=n-1;

        for(int i=n-1;i>=0;i--){
            if(nums[i]==val){
                //int temp=nums[i];
                nums[i]=nums[j--];
                nums.pop_back();

                continue;

            }

            ans++;
        }

        return ans;
        
    }
};
