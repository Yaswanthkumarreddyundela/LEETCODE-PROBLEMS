class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> ans; // Fix: Resize is not needed, use push_back instead.

        // Flatten the grid into a 1D array
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans.push_back(grid[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        int median = ans[ans.size() / 2];
        int operations = 0;
        for(int i = 0; i < ans.size(); i++) {
            if ((ans[i] - median) % x != 0) {
                return -1; 
            }
            operations += abs(ans[i] - median) / x;  
        }
        return operations;
    }
};
