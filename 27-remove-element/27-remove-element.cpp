class Solution {
public:
    static int removeElement(std::vector<int>& nums, int val) {
        const auto it = std::remove(nums.begin(), nums.end(), val);
        return std::distance(nums.begin(), it);
    }
};