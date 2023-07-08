class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int xor1 = 0;
        int xor2 = 0;
        int ans = 0;
        for(int i = 1; i<nums.size(); i++) {
            xor1 = xor1 ^ i;
        }

        for(int i = 0; i< nums.size(); i++) {
             xor2 = xor2 ^ nums[i];
             ans = xor1 ^ xor2;
        }
        return ans;
    }
};