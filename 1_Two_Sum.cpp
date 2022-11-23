
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> output;
        int n=nums.size();
        vector<int> temp=nums;
        int arr[2];
        
     //   cout<<temp[0];
        
        sort(temp.begin(),temp.end());
        
            //    cout<<temp[0];

       for(int i=0,j=n-1;i<j;){
           
            if(temp[i]+temp[j]==target){
                arr[0]=temp[i];
                arr[1]=temp[j];
                break;
            }
            
            else if(temp[i]+temp[j]<target) i++;
        
            else  j--;
           
        //   cout<<arr[0]<<"   "<<arr[1]<<endl;
            
        } 
        
        for(int i=0;i<n;i++){
            
            if(arr[0]==nums[i]) output.push_back(i);
            
         else if(arr[1]==nums[i]) output.push_back(i);

            
        }
         return output;
    }
         
};
