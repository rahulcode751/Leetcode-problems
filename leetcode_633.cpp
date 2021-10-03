class Solution {
public:
    bool judgeSquareSum(int c)
    {
        long long left = pow(c,0.5),right  = 0;
        while(right <= left)
        {
            if(pow(right,2) + pow(left,2) == c)
            {
                return true;
            }
            else if(pow(right,2) + pow(left,2) < c)
            {
                right++;
            }
            else
            {
                left--;
            }
        }
        return false;
    }
};
