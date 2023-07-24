class Solution {
public:
    double myPow(double x, int n) {
        // double ans=pow(x,n);

        double ans=1;
        int a=n;
        n=abs(n);

        while(n>0){
            if(n&1){
                ans=ans*x;
            }

            x=x*x;
            n=n>>1;
        }

        if(a<0){
            ans=double(1)/ans;
        }

        return ans;
        
    }
};
