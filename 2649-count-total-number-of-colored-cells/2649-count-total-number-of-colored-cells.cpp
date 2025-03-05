class Solution {
public:
    long long coloredCells(int n) {
        long long k = n;
        return (2*k*(k-1)) +1 ;
    }
};