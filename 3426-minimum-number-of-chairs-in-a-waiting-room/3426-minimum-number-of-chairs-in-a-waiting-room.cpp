class Solution {
public:
    int minimumChairs(string s) {
        int count = 0, maxChairs = 0;
        for (char c : s) {
            if (c == 'E') {
                count++;
                maxChairs = max(count, maxChairs);
            } else {
                count--;
            }
        }
        return maxChairs;
    }
};