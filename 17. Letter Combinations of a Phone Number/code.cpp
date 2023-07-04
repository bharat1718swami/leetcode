class Solution {
public:

    void solve(string digits, string input, int index, vector<string> alpha, vector<string>& ans){
      
        if(index==digits.size()){
            ans.push_back(input);
            return;
        }

        int num=digits[index]-'0';
        string s=alpha[num];

        for(int i=0;i<s.size();i++){
            input.push_back(s[i]);
            solve(digits,input,index+1,alpha,ans);
            input.pop_back();
        }

        return;
    }

    vector<string> letterCombinations(string digits) {

        vector<string> alpha={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        vector<string> ans;

        if(digits.size()==0) return ans;


        string input;
        int index=0;

        solve(digits,input,index,alpha,ans);

        return ans;
        
    }
};
