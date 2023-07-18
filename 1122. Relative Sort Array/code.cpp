class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans(1001,0);

        for(int i=0;i<arr1.size();i++){
            ans[arr1[i]]++;
        }

        int index=0;
        for(int i=0;i<arr2.size();i++){

            while(ans[arr2[i]]!=0){
                arr1[index]=arr2[i];
                ans[arr2[i]]--;
                index++;
            }
        }

        for(int i=0;i<ans.size();i++){
            while(ans[i]>0){
                arr1[index]=i;
                index++;
                ans[i]--;
            }
        }

        return arr1;
   
    }
};
