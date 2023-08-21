class Solution {
public:

    vector<int> nextSmallerIndex(vector<int> arr, int n){

        stack<int> s;
        s.push(-1);
        vector<int> ans(n,-1);

        for(int i=n-1;i>=0;i--){
            while(s.top()!=-1&&arr[s.top()]>=arr[i]){
                s.pop();
            }

            ans[i]=s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerIndex(vector<int> arr, int n){

        stack<int> s;
        s.push(-1);
        vector<int> ans(n,-1);

        for(int i=0;i<n;i++){
            while(s.top()!=-1&&arr[s.top()]>=arr[i]){
                s.pop();
            }

            ans[i]=s.top();
            s.push(i);
        }

        return ans;
    }


    int largestRectangleArea(vector<int>& heights) {

        int area=INT_MIN;
        int n=heights.size();

        vector<int> next(n);
        next=nextSmallerIndex(heights,n);

        vector<int> prev;
        prev=prevSmallerIndex(heights,n);

        for(int i=0;i<n;i++){
            int h=heights[i];
            
            if(next[i]==-1){
                next[i]=n;
            }

            int b=next[i]-prev[i]-1;

            int a=h*b;

            area=max(area,a);
        }

        return area;
        
    }
};
