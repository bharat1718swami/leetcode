class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

        vector<int> remainders(60,0);
        int ans = 0;
        for(auto &i: time){

            ans += (remainders[(60-((i)%60))%60]);
            remainders[((i))%60]++;

            // cout<<ans<<" ";
        }
        return ans;
        
        
    }
};
