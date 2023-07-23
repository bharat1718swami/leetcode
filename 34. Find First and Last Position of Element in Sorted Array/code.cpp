class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {



        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        vector<int> ans={-1,-1};
        int index1=-1,index2=-1;

        while(s<=e){
            if(nums[mid]==target){  
                index1=mid;
                e=mid-1;
            }

            else if(nums[mid]>target){
                e=mid-1;
            }

            else{
                s=mid+1;
            }

            mid=s+(e-s)/2;
        }

        s=0;
        e=nums.size()-1;
        mid=s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target){
                index2=mid;
                s=mid+1;
            }

            else if(nums[mid]>target){
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }

            mid=s+(e-s)/2;
        }

        ans[0]=index1;
        ans[1]=index2;

        return ans;
        
    }
};
