class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> s;

        for(int i=0;i<asteroids.size();i++){
            if(s.empty()){
                s.push(asteroids[i]);
            }

            else if(s.top()*asteroids[i]>0){
                s.push(asteroids[i]);
            }

            else{
                
                if(s.top()<0){
                    s.push(asteroids[i]);
                }

                else if(abs(asteroids[i])==s.top()){
                    s.pop();
                }

                else if(abs(asteroids[i])>s.top()){
                    s.pop();
                    i--;
                }
            }
        }

        int n=s.size();
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            ans[n-i-1]=s.top();
            s.pop();
        }
        
        return ans;
    }
};
