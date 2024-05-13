class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& poi) {
        int n = poi.size();
        int maxi = 0;
        sort(poi.begin(), poi.end());
        for (int i = 1; i < n; i++) {
            int maxii = poi[i][0] - poi[i - 1][0];
            maxi = max(maxi, maxii);
        }
        return maxi;
    }
};
