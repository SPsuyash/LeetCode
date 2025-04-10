class Solution {
public:
    bool hasCycle(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inPath) {
        visited[node] = true;
        inPath[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (hasCycle(neighbor, adj, visited, inPath)) return true;
            } else if (inPath[neighbor]) {
               
                return true;
            }
        }

        inPath[node] = false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& p : prerequisites) {
            int course = p[0], prereq = p[1];
            adj[prereq].push_back(course);
        }

        vector<bool> visited(numCourses, false);
        vector<bool> inPath(numCourses, false);

        for (int i = 0; i < numCourses; ++i) {
            if (!visited[i]) {
                if (hasCycle(i, adj, visited, inPath)) return false;
            }
        }

        return true;
    }
};
