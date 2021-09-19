class Solution {
public:
    bool isPalindrome(int x) {
        int r = 0;
        long long int s = 0;
        int a = x;
        if(x < 0){
            return false;
        }

        while(x > 0){
            r = x%10;
            s = s*10 + r;
            x = x/10;
        }
        if(s == a){
            return true;
        }
        return false;
    }
};
//
