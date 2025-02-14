class ProductOfNumbers {
    vector<int> arr;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        if (k > arr.size()) return 0;
        int p=1;
        for(int i=arr.size()-1 ; i>=(int)arr.size()-k;i--){
            p*=arr[i];
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */