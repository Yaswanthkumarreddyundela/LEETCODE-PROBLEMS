#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = 1LL * (*min_element(ranks.begin(), ranks.end())) * cars * cars;
        long long ans = right;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (car(ranks, mid) >= cars) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

    long long car(vector<int>& ranks, long long mid) {
        long long sum = 0;
        for (int r : ranks) {
            sum += sqrt(mid / r);  // Number of cars repaired by a mechanic with rank `r`
        }
        return sum;
    }
};
