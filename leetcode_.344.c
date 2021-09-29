class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
         reverse(s.begin(), s.end());

        for(int i =0; i<size; i++){
            cout<<s[i]<<",";
        }
    }
};
