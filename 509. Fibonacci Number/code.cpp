class Solution {
public:
    int fib(int n) {
        
        if(n==1) return 1;
        if(n==0) return 0;
        return fib(n-1)+fib(n-2);

        
        
    /*    int f1=0,f2=1;
        int f=0;
        
        for(int i=0;i<n;i++){
            f=f1+f2;
            f1=f2;
            f2=f;
        }
        
        return f1;

        */
        
    }
};
