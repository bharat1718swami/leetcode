class Solution {
public:

    vector<vector<bool>> UpdateFlag(vector<vector<bool>> flag, int row, int col, int n){
        flag[row]=vector<bool>(n,false);

        for(int i=0;i<n;i++){
            flag[i][col]=false;
        }

        int i=row,j=col;

        while(i>=0&&j>=0){
            flag[i][j]=false;
            i--;
            j--;
        }

        i=row;
        j=col;

        while(i>=0&&j<n){
            flag[i][j]=false;
            i--;
            j++;
        }

        i=row;
        j=col;

        while(i<n&&j<n){
            flag[i][j]=false;
            i++;
            j++;
        }

        i=row;
        j=col;

        while(i<n&&j>=0){
            flag[i][j]=false;
            i++;
            j--;
        }

        return flag;

    }

    void solve(vector<vector<string>>& ans, int row, int col, int n, vector<vector<bool>> flag, vector<int>& pos, vector<string> v){
        if(row==n){
            ans.push_back(v);
            return;
        }


        for(int i=0;i<n;i++){

            if(flag[row][i]){
                
                string temp;
                for(int j=0;j<n;j++){
                    if(j==i){
                        temp.push_back('Q');
                    }
                    else{
                        temp.push_back('.');
                    }
                }

                v.push_back(temp);
            

                // ans.push_back(temp);
                vector<vector<bool>> newflag=UpdateFlag(flag,row,i,n);
                solve(ans, row+1, i, n, newflag, pos, v);

                // if(check) return true;

                v.pop_back();

                // ans.pop_back();


            }
        }

        // return false;
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<bool>> flag(n,vector<bool>(n,true));
        int row=0,col=0;
        vector<vector<string>> ans;
        vector<string> v;
        vector<int> positions;

        solve(ans, row, col, n, flag, positions, v);
        return ans;
        
    }
};
