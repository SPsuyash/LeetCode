class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        while (l < r && s[l] == s[r]) {
            char st = s[l];
            while (l <= r && s[l] == st) {
                l++;
            }
            while (r >= l && s[r] == st) {
                r--;
            }
        }
        return r - l + 1;
    }
};