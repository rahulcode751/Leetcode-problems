class Solution {
public:
    bool isPerfectSquare(int n) {
    int sr = sqrt(n);

    if (sr * sr == n)
        return true;
    else
        return false;

    }
};
