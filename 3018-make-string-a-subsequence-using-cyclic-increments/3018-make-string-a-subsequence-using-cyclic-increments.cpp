class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        int i = 0;
        int j = 0;

        while (i < n && j < m) {
            if ((str1[i] == str2[j]) || (cyclicIncrement(str1[i]) == str2[j])) {
                i++;
                j++;
            } else {
                i++;
            }
        }

        return j == m;
    }

private:
    char cyclicIncrement(char c) {
        if ('a' <= c && c <= 'z') {
            return (c == 'z') ? 'a' : c + 1;
        }
        if ('A' <= c && c <= 'Z') {
            return (c == 'Z') ? 'A' : c + 1;
        }
        return c;
    }
};
