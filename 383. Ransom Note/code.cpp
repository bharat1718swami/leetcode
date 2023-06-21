// 9-6-22

class Solution {
public:
    bool canConstruct(string rensomNote, string magazine) {

        map<char,int> m;

        for(int i=0;i<magazine.size();i++){
            m[magazine[i]]++;
        }

        for(int i=0;i<rensomNote.size();i++){
            if(m[rensomNote[i]]==0) return false;
            else{
                m[rensomNote[i]]--;
            }
        }

        return true;
      
      
    // Complexity : O(n*m)
      /*  
        sort(rensomNote.begin(),rensomNote.end());
        sort(magazine.begin(),magazine.end());
        
        for(int i=0;i<rensomNote.length();i++){
            int j;
            for( j=i;j<magazine.length();j++){
                if(rensomNote[i]==magazine[j]){
                    magazine[j]='1';
                    break;
                }    
            }
            
            if(j==magazine.length()) return false;
        }
        return true;

        */
    }
};
