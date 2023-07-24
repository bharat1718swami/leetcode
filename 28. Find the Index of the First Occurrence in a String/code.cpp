class Solution {
public:
    int strStr(string haystack, string needle) {

        int n=haystack.size()-needle.size();

/*
        string s="";

        int j=0;
        for( ;j<needle.size();j++){
            s=s+haystack[j];
        }

        for(int i=0;i<=n;i++){
            if(s==needle){
                return i;
            }

            s.erase(s.begin()+0);
            s=s+haystack[j];
            j++;
        }

        return -1;

        */


        for(int i=0;i<=n;i++){
            string s=haystack.substr(i,needle.size());

            if(s==needle){
                return i;
            }
        }

        return -1;
          
    }
};
