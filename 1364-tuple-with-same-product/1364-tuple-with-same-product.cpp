class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
           unordered_map<int, int> productCount;
        int n = nums.size(), result = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                productCount[nums[i] * nums[j]]++;
            }
        }

        for (auto& entry : productCount) {
            int freq = entry.second;
            if (freq > 1) {
                result += (freq * (freq - 1) / 2) * 8;
            }
        }

        return result;
    }
};