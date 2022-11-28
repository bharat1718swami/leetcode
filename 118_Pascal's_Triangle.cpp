class Solution {
public:
    vector<vector<int>> generate(int n) {
	
        vector<vector<int>>ans;
        ans.push_back({1});
		
        for(int i=1;i<n;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j-1>=0 && j<i)
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
                else if(j-1<0)
                    temp.push_back(ans[i-1][j]);
                else
                    temp.push_back(ans[i-1][j-1]);
            }
            
            ans.push_back(temp);
        }
        return ans;
    }
};
