class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int xor1 = 0;
        int xor2 = 0;
        int ans = 0;
        for(int i = 1; i<arr.size(); i++) {
            xor1 = xor1 ^ i; // Xoring with 1 to n so xor becomes 1 to n
        }

        for(int i = 0; i< arr.size(); i++) {
             xor2 = xor2 ^ arr[i];
             ans = xor1 ^ xor2;
        }
        return ans;
    }
};