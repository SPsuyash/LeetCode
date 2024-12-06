class Solution {
public:
    int countElementsToMaxSum(vector<int> &arr, int target) {
        int sum = 0, count = 0;
        for (int num : arr) {
            if (sum + num > target)
                break;
            sum += num;
            count++;
        }
        return count;
    }
    
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int> arr;
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        
        for (int i = 1; i <= n; i++) {
            if (bannedSet.find(i) == bannedSet.end()) {
                arr.push_back(i);
            }
        }
        
        sort(arr.begin(), arr.end());
        return countElementsToMaxSum(arr, maxSum);
    }
};
