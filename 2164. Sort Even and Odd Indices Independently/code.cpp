class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        // for storing elements whose at even,odd places
        vector<int> even;
        vector<int> odd;


        //Storing elements 
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }


        // sort both vector even position in incresing order and odd in decreasing order
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());

        // Merge both vectors
            int i=0;
            int o=0,e=0;
            while(o<odd.size()&&e<even.size()){
                nums[i++]=even[e];
                nums[i++]=odd[o];
                e++;
                o++;
            }

            // if vector has odd elements the adding last element
            if(e<even.size()){
                nums[i]=even[e];
            }

            return nums;
        
    }
};
