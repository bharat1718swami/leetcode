class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int Right_Sum=0,Left_Sum=0;

        for(int i=1;i<nums.size();i++){
            Right_Sum+=nums[i];
        }

        int ans=-1;

        for(int i=0;i<nums.size();i++){
            if(Right_Sum==Left_Sum){
                ans=i;
                break;
            }

            else{

                if(i==nums.size()-1) break;


                Left_Sum+=nums[i];
                Right_Sum-=nums[i+1];
            }
        }

        return ans;
        
    }
};
