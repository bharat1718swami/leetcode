class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int ans=0;
        int first=0,second=0;
        int check=0;

        int i=0;

        while(i<nums.size()&&nums[i]==1){
            first++;
            i++;
        }

        i++;

        for(;i<nums.size();i++){

            second=0;
            while(i<nums.size()&&nums[i]==1){
                second++;
                i++;
            }

            ans=max(ans,first+second);
            first=second;
        }

        return max(ans,first-1);
        
    }
};
