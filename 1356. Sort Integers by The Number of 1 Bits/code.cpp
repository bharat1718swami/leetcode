class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        
        vector<int> ans;
        map<int,vector<int>> m;  //to store a dummy vector of same bits

        for(int i=0;i<arr.size();i++){
            int n=arr[i];
            int count=0; //to count bits in a perticular number

            //Counting bits 
            while(n){
                int temp=n&1;
                if(temp==1){
                    count++;
                }
                n=n>>1;
            }
            // cout<<count<<endl;

            // adding element in vector of a perticular bit
            m[count].push_back(arr[i]);  

        }


        // As given in Constraints there are maximum 14 number of bits so i use to traverse till 14
        for(int i=0;i<=14;i++){
            if(m[i].size()!=0){
                // Sorting vector because we store elements in sorted order
                sort(m[i].begin(),m[i].end());  

                for(int j=0;j<m[i].size();j++){
                    ans.push_back(m[i][j]);
                }
            }
        }

        return ans;
        
    }
};
