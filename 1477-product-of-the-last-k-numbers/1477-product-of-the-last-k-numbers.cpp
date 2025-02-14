class ProductOfNumbers {
    vector<int> prefix;
public:
    ProductOfNumbers() {
        prefix.push_back(1);  // Base case: product of 0 elements is 1
    }
    
    void add(int num) {
        if (num == 0) {
            prefix.clear();
            prefix.push_back(1);  // Reset if a zero is encountered
        } else {
            prefix.push_back(prefix.back() * num);
        }
    }
    
    int getProduct(int k) {
        if (k >= prefix.size()) return 0;  // If k is larger than available products, return 0
        return prefix.back() / prefix[prefix.size() - 1 - k];
    }
};
