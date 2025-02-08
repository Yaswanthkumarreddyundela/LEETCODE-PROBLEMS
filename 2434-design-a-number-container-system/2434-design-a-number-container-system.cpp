class NumberContainers {
    unordered_map<int,int> numin;
    unordered_map<int,set<int>> ravi;
public:
    NumberContainers() {

    }

    void change(int index, int number) {
        if(numin.count(index) == 1){
            int prev = numin[index];
            ravi[prev].erase(index);
            if(ravi[prev].empty()){
                ravi.erase(prev);
            }
        }
        numin[index]=number;
        ravi[number].insert(index);
    }

    int find(int number) {
        if(ravi.count(number))
        return *ravi[number].begin() ;
        else return -1;

    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */