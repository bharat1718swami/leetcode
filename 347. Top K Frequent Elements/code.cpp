class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        
        map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        vector<int> temp;

        for(auto i : m){
            temp.push_back(i.second);
        }

        sort(temp.begin(), temp.end(), greater<int>());

        for(int i=0;i<k;i++){
            int frequency=temp[i];
            for(auto i : m){
                if(i.second==frequency){
                    ans.push_back(i.first);
                    m[i.first]=-1;
                    break;
                }
            }
        }

        return ans;


    }
};
