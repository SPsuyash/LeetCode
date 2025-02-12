class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> sumMap;
        int maxSum = -1;

        for (int num : nums) {
            int digitSum = 0, temp = num;
            while (temp) {
                digitSum += temp % 10;
                temp /= 10;
            }

            if (sumMap.count(digitSum)) {
                maxSum = max(maxSum, sumMap[digitSum] + num);
                sumMap[digitSum] = max(sumMap[digitSum], num);
            } else {
                sumMap[digitSum] = num;
            }
        }

        return maxSum;
    }
};
