class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int a = 0;
        for(int i =0; i<size; i++){

            if(nums[i] != a){
                a = i;
                break;
            }
            a++;
        }
        return a;
    }
};
