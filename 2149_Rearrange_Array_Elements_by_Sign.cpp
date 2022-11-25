class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        
        
        int n=nums.size();
        
        vector<int> ans(n);
        int P=0,N=1;
        
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[N]=nums[i];
                N=N+2;
            }
            
            else{
                ans[P]=nums[i];
                P=P+2;
            }
        }
        
        return ans;
        
  
    }
};
