class Solution {
public:
    string sortSentence(string s) {

        int n=0;
        // Count number of words
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                n++;
            }
        }

        vector<string> temp(n+1);

        // add words in vector to there respective position
        for(int i=0;i<s.size();i++){
            string a="";
            int index;
            while(s[i]!='\0'&&s[i]!=' '){
                if(s[i+1]=='\0'||s[i+1]==' '){
                    index=s[i]-'0';
                }
                else{
                    a=a+s[i];
                }

                i++;
            }

            temp[index-1]=a;
        }

        int k=0;
        // adding words to string
        for(int i=0;i<temp.size();i++){
            for(int j=0;j<temp[i].size();j++){
                s[k]=temp[i][j];
                k++;
            }

            s[k]=' ';
            k++;
        }

        // cut the string by number of words because it contain extra letters
        s=s.substr(0,s.size()-n-1);

        return s;
        
    }
};
