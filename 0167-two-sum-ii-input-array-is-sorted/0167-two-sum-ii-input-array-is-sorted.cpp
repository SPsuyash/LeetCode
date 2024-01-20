class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0, end = n - 1;
        while (start < end) {
            if (arr[start] + arr[end] == target)
                return {start + 1, end + 1};

            else if (arr[start] + arr[end] > target)
                end--;
            else
                start++;
        }
        return {-1, -1};
    }
};
