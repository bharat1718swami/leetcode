class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        
        for(int i=0,j=1;j<n;){
            if(nums[i]==0){
                if(nums[j]!=nums[i]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    i++;
                }
                
                if(nums[j]==0) j++;   
            }
            
            else i++,j++;
        }
        
    }
};
