class Solution {
public:

    int Find(vector<int>& arr, int start, int end, int ans=-1){

        if(start>end){
            return ans;
        }

        int mid=start+(end-start)/2;

        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans=mid;
        }

        else if(arr[mid]<arr[mid+1]){
            ans=Find(arr,mid,end,ans);
        }
        else if(arr[mid]<arr[mid-1]){
            ans=Find(arr,start,mid,ans);
        }

        return ans;
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int start=0,end=n-1;
        int mid=start+(end-start)/2;

        return Find(arr,0,end);



/*
        while(start<=end){
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;

            else if(arr[mid]<arr[mid+1]){
                start=mid;
            }
            else if(arr[mid]>arr[mid+1]){
                end=mid;
            }
            mid=start+(end-start)/2;
        }

        return -1;
        */
    }
};
