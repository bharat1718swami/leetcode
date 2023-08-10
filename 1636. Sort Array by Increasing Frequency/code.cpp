class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {


    map<int,int> m; // for storing the elements frequency
    set<int> s;     // for storing elements so they not repeat

    // Storing elements with frequencies in map
    // and insert elements in set
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
        m[nums[i]]++;
    }
    
    /* This map is for storing frequency as a key and vector of elements whose frequencies are
    same */
    map<int,vector<int>> temp; 
    // As many elements have same frequencies so i use set rather then vector to store freq. 
    set<int> check;

    for(auto i:s){
        int a=m[i];           //taking element frequency
        //make frequency as key and add element in vector corresponding to key
        temp[a].push_back(i);  
        check.insert(a);
    }


    vector<int> ans;

    // to iterate in frequency order
    for(auto i:check){
        int freq=i;

        // if there is any vector corresponding to frequency then we add to ans
        if(temp[freq].size()!=0){
            sort(temp[freq].rbegin(),temp[freq].rend());

            for(int j=0;j<temp[freq].size();j++){
                int n=freq;
                while(n){
                    ans.push_back(temp[freq][j]);
                    n--;
                }
            }
        }
    }

    return ans;


        
        
    }
};
