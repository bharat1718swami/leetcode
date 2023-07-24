class Solution {
public:
    string addBinary(string a, string b) {

        string ans;

        int carry=0;

        int n=a.size()-1,m=b.size()-1;

        while(n>=0&&m>=0){
            int temp=a[n]-'0'+b[m]-'0'+carry;

            if(temp==0){
                ans="0"+ans;
                // ans.push_back('0');
                carry=0;
            }

            else if(temp==1){
                ans='1'+ans;
                // ans.push_back('1');
                carry=0;
            }
            else if(temp==2){
                ans="0"+ans;
                // ans.push_back('0');
                carry=1;
            }

            else{
                ans='1'+ans;
                // ans.push_back('1');
                carry=1;
            }

            n--;
            m--;
        }

        while(n>=0){
            int temp=a[n]-'0'+carry;
            // cout<<temp<<" ";
            if(temp==0){
                ans='0'+ans;
                // ans.push_back('0');
                carry=0;
            }

            else if(temp==1){
                ans='1'+ans;
                // ans.push_back('1');
                carry=0;
            }
            else if(temp==2){
                ans='0'+ans;
                // ans.push_back('0');
                carry=1;
            }

            n--;
        }

        while(m>=0){
            int temp=b[m]-'0'+carry;
            if(temp==0){
                ans='0'+ans;
                // ans.push_back('0');
                carry=0;
            }

            else if(temp==1){
                ans='1'+ans;
                // ans.push_back('1');
                carry=0;
            }
            else if(temp==2){
                ans='0'+ans;
                // ans.push_back('0');
                carry=1;
            }

            m--;
        }

        if(carry){
            ans='1'+ans;
            // ans.push_back('1');
        }

        return ans;
        
    }
};
