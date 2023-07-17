// 9-6-22
class Solution {
public:
    int firstUniqChar(string s) {
        
        for(int i=0;i<s.length();i++){
            int j=0;
          //  cout<<s[j]<<endl;
            for(j=0;j<s.length();j++){
                
                if(i==j); 
                else if(s[i]==s[j]){
                    break;
                }
            }
         //   cout<<s[j]<<endl;
            if(j==s.length()){
                return i;
            }
        }
        return -1;
    }
};
