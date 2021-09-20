class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int r = accounts.size();
        int c =  accounts[0].size();
        int maximum = 0;
        int sum = 0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                sum = sum + accounts[i][j];
            }
            maximum = max(maximum,sum);
            sum = 0;
        }
        return maximum;
    }
};
