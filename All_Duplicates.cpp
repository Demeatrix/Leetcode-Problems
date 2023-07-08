class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        int i = 0;
        while(i<nums.size()) {
            int correct = nums[i]-1;
            if(nums[i] != nums[correct]) {
                swap(nums[i], nums[correct]);
            }else {
                i++;
            }
        }

        vector<int> ans;
        for(int index = 0; index < nums.size(); index++) {
            if(nums[index] != index +1) {
                ans.push_back(nums[index]);
            }
    }
    return ans;
}
};