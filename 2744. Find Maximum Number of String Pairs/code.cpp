class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        int count=0;

        for(int i=0;i<words.size();i++){

            string s=words[i];
            if(s=="11"){
                continue;
            }

            for(int j=i+1;j<words.size();j++){
                string t=words[j];
                if(s[0]==t[1]&&s[1]==t[0]){
                    count++;
                    words[j]="11";
                    break;
                }
            }
        }

        return count;
        
    }
};
