class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        map<int,int> m;

        for(int i=0;i<nums.size();i++){

            // cout<<nums[i]<<" "<<m[nums[i]]<<endl;

            if(m[nums[i]]){
                if(i+1-m[nums[i]]<=k) return true;

                else m[nums[i]]=i+1;
            }

            else{
                m[nums[i]]=i+1;
            }
        }

        return false;
        
    }
};
