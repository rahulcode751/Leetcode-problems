class Solution {
public:
    int largestRectangleArea(vector<int>& arr)
    {   // Your code here
        stack<int> s;
        int ma = 0;
        int i = 0;
        int n = arr.size();
        while(i<n){
            if(s.empty() or arr[s.top()] <= arr[i]){
                s.push(i++);
            }
            else{
                int tp = s.top();
                s.pop();
                int ans = arr[tp]*(s.empty() ? i : i-s.top()-1);
                ma = max(ma,ans);
            }
        }
        while(!s.empty()){
            int tp = s.top();
            s.pop();
            int ans = arr[tp]*(s.empty() ? i : i-s.top()-1);
            ma = max(ma,ans);
        }
        return ma;
    }
};
