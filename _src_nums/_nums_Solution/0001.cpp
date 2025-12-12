class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>map;
        for (int i = 0; i < nums.size(); i++) {
            int tmp = target - nums[i];
            if (map.count(tmp))return { map[tmp],i };
            map[nums[i]] = i;
        }
        return {};
    }
};