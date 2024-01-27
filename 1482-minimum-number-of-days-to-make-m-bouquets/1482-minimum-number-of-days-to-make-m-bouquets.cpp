class Solution {
public:

    int possibleBouquets(vector<int> &bloomDay, int n, int k, long long mid) {

        int bouquets = 0, adjCount = 0;

        for(int i = 0; i < n; i++) {
            if(bloomDay[i] <= mid) {
                adjCount++;
            }
            else {
                bouquets += (adjCount / k);
                adjCount = 0;
            }
        } 

        bouquets += (adjCount / k);

        return bouquets;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();

        if(n < (long long)m * k)
            return -1;

        long long low = 1, high = *max_element(bloomDay.begin(), bloomDay.end());
        long long ans = high;

        while(low <= high) {
            long long mid = (low + high) >> 1;

            int bouquets = possibleBouquets(bloomDay, n, k, mid);

            if(bouquets >= m) {
                ans = min(ans, mid);
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;

    }
};