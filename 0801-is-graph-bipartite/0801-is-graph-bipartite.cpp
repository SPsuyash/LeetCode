class Solution {
public:
    bool isBipart(int node, vector<vector<int>>& graph, vector<int>& color) {
        for (int j = 0; j < graph[node].size(); j++) {
            int neighbor = graph[node][j];
            if (color[neighbor] == -1) {
                color[neighbor] = (color[node] + 1) % 2;
                if (!isBipart(neighbor, graph, color)) {
                    return 0;
                }
            } else {
                if (color[node] == color[neighbor]) {
                    return 0;
                }
            }
        }
        return 1;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                color[i] = 0;
                if (!isBipart(i, graph, color)) {
                    return 0;
                }
            }
        }
        return 1;
    }
};
