class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n=digits.size()-1;

        int carry=0;

        while(n>=0&&digits[n]==9){
            digits[n]=0;
            carry=1;
            n--;
        }

        if(n<0){
            digits[0]=1;
            digits.push_back(0);
        }

        else{
            digits[n]+=1;
        }

        return digits;
        
    }
};
