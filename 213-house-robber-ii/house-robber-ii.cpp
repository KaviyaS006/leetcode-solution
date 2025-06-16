
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];

        return max(
            rob_in_window(nums, 0, nums.size() - 2),
            rob_in_window(nums, 1, nums.size() - 1)
        );
    }

    int rob_in_window(vector<int>& nums, int start, int end) {
        int t2 = 0;
        int t1 = 0;
        for (int i = start; i <= end; ++i) {
            int temp = t1;
            t1 = max(nums[i] + t2, t1);
            t2 = temp;
        }
        return t1;
    }
};