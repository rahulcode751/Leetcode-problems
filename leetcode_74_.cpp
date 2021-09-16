class Solution {
public:
bool searchMatrix(vector<vector>& matrix, int t) {

    int row=matrix.size();
    int colum=matrix[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<colum; j++){
            if(matrix[i][j] == t){
                return true;
            }
        }
    }
    return false;
}
};
