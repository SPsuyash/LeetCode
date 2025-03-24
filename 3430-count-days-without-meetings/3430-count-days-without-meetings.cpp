class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n = meetings.size(), ans = 0;
        sort(meetings.begin(), meetings.end());

        int last = 1;
        for (int i = 0; i < n; i++) {
            int s = meetings[i][0], e = meetings[i][1];
            if (s > last)
                ans += (i == 0) ? (s - last) : (s - last - 1);
            last = max(last, e);
        }

        if (days > last)
            ans += (days - last);

        return ans;
    }
};
