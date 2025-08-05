class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int placed = 0;
        int n = fruits.size();
        int m = baskets.size();
        vector<bool> used(m, false);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!used[j] && fruits[i] <= baskets[j]) {
                    placed++;
                    used[j] = true;
                    break;
                }
            }
        }
        return n-placed;

    }
};