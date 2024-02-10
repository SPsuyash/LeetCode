class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        for (int i = 0; i < n - m; i++) {
            int j = i;
            while (j < n - m && arr[j] == arr[j + m])
                j++;
            if ((j - i) / m + 1 >= k)
                return true;
        }
        return false;
    }
};