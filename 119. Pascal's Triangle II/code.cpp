class Solution {
public:
    vector<int> getRow(int rowIndex) {

        // if(rowIndex==0) return {1};

        vector<int> ans={1};

        while(rowIndex){
            vector<int> temp;
            temp.push_back(1);

            int n=ans.size()-1;

            for(int i=0;i<n;i++){
                temp.push_back(ans[i]+ans[i+1]);
            }

            temp.push_back(1);

            ans=temp;
            rowIndex--;
        }

        return ans;
        
    }
};
