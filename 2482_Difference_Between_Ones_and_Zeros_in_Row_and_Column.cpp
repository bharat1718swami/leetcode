class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        
        vector<vector<int>> diff;
        vector<int> ans;
        int one=0,zero=0;
        int k=0;
        
        vector<int> ones_row;
        vector<int> ones_col;
        vector<int> zeros_row;
        vector<int> zeros_col;
        
        for(int i=0;i<r;){
            if(grid[i][k]==1){
                one++;
            }
            else{
                zero++;
            }
            
            k++;
            if(k>=c){
               ones_row.push_back(one);
               zeros_row.push_back(zero);
                k=0;
                i++;
                one=0,zero=0;
            }
        }
        
        for(int i=0;i<c;){
            if(grid[k][i]==1){
                one++;
            }
            else{
                zero++;
            }
            
            k++;
            if(k>=r){
               ones_col.push_back(one);
               zeros_col.push_back(zero);
                k=0;
                i++;
                one=0,zero=0;
            }
        }
        
        for(int i=0;i<r;){
            int temp=ones_row[i]+ones_col[k]-zeros_row[i]-zeros_col[k];
            ans.push_back(temp);
            k++;
            if(k>=c){
                diff.push_back(ans);
                ans.clear();
                k=0;
                i++;
            }
        }
        
        return diff;
        
    }
};
