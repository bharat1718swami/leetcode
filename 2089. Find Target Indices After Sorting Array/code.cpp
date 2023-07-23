class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {


        int startIndex=0;
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                startIndex++;
            }

            if(nums[i]==target){
                m[target]++;
            }
        }

        vector<int> ans;

        while(m[target]){
            ans.push_back(startIndex++);
            m[target]--;
        }

        return ans;


      
// Time Complexity O(nlog(n))
     /*   sort(nums.begin(),nums.end());

        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int startIndex=-1,endIndex=-1;

        while(s<=e){
            if(nums[mid]==target){
                startIndex=mid;
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

        s=0,e=nums.size()-1;
        mid=s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target){
                endIndex=mid;
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

        vector<int> ans;

        if(startIndex==-1)  return ans;

        for(int i=startIndex;i<=endIndex;i++){
            ans.push_back(i);
        }

        return ans;

        */
        
    }
};
