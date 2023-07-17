class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]<=2){
                ans=ans^nums[i];
            }
        }

        return ans;
    }
};
