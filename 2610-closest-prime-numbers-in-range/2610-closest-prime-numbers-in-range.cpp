#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        vector<bool> isPrime(right + 1, true);

        // Step 1: Use Sieve of Eratosthenes to find primes up to 'right'
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime
        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i)
                    isPrime[j] = false;
            }
        }

        // Step 2: Store primes in the given range [left, right]
        for (int i = max(2, left); i <= right; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        // Step 3: If less than 2 primes, return {-1, -1}
        if (primes.size() < 2) return {-1, -1};

        // Step 4: Find closest prime pair
        int minDiff = INT_MAX;
        int l = -1, r = -1;
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                l = primes[i - 1];
                r = primes[i];
            }
        }
        return {l, r};
    }
};

