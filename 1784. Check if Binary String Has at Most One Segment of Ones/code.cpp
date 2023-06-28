class Solution {
public:
    bool checkOnesSegment(string s) {


        int count=0,ones=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(ones!=0) return false;
                count++;
            }
              
            else{
                ones=max(ones,count);
                count=0;
            }
        }
        
        return true;
    }
};
