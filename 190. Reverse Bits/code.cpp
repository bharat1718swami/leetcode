class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t ans=0;

        // vector<int> v(32,0);
        int index=31;

        while(n){
            int temp=n&1;
            // v[index--]=temp;
            ans=ans+temp*pow(2,index);
            index--;

            n=n>>1;
        }

        return ans;
        
    }
};
