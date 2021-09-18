class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = mat.size();
        int k = mat[0].size();
        int sum = 0;
        int count = 0;
        for( int i=0; i<s; i++){
            sum = sum  + mat[i][i];
            count++;
        }
        int i =0;
        int count2  = 0;
            for(int j=k-1; j>=0; --j){
                sum = sum + mat[i][j];
                i++;
                count2++;
            }
        if(count%2 != 0 & count2%2 != 2){
            sum = sum - mat[s/2][s/2];
            return sum;
        }
        return sum;

    }
};
