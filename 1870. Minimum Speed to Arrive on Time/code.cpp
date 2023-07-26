class Solution {
public:

    bool Ispossible(int mid, vector<int> arr, double hour){

        double ans=0.0;
        if(mid==0) return false;


        for(int i=0;i<arr.size()-1;i++){
            double temp=ceil((double)arr[i]/mid);
            // cout<<ceil((float)arr[i]/mid)<<" ";
            ans+=temp;
        }

        cout<<endl;

        double temp=((double)arr[arr.size()-1]/mid);
        ans+=temp;

        return ans<=hour;

/*
        for(int i=0;i<arr.size();i++){
            int temp=arr[i]/mid;
            float rem=(float)arr[i]/mid-temp;

            // cout<<hour<<" "<<rem<<" "<<temp<<endl;


            if(rem>0){
                // cout<<"hello";
                if(i==arr.size()-1){
                    hour=hour-rem-temp;
                }
                else{
                    hour=hour-temp-1;
                }    
            }
            else{
                hour-=temp;
            }

            cout<<hour<<endl;


            if(hour<0) return false;

        }

        */

        // cout<<endl;

        // return false;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(dist.size()-1>=hour) return -1;

        int ans=-1;
        int end=1000000000,start=0;

        // for(int i=0;i<dist.size();i++){
        //     if(end<dist[i]){
        //         end=dist[i];
        //     }
        // }

        int mid=start+(end-start)/2;



        while(start<=end){

            mid=start+(end-start)/2;

            cout<<start<<" "<<end<<endl;

            if(Ispossible(mid, dist, hour)){
                ans=mid;
                end=mid-1;
                // cout<<ans<<endl;
            }
            else{
                start=mid+1;
            }

            // cout<<ans;

            // cout<<start<<" "<<end<<endl;

            
        }

        return ans;
        
    }
};
