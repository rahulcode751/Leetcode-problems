class Solution {
public:
    bool isPowerOfFour(int n) {
        unordered_set<int> m ({1,4,16,64,256,1024,4096,16384,65536,262144,1048576,4194304,16777216,67108864,268435456,1073741824});

        if(m.find(n) != m.end())return true;
        return false;
    }
};
