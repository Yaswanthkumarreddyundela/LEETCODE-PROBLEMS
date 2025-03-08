class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int count=0;
        for(int i=0;i<k;i++){
            if(blocks[i] == 'W'){
                count++;
            }
        }
        int mini = count;
        for(int i=1;i<=n-k;i++){
            if(blocks[i-1] == 'B' && blocks[k-1+i] == 'W'){
                count++;
            }
            if(blocks[i-1] == 'W' && blocks[k-1+i] == 'B'){
                count--;
            }
            if(mini > count){
                mini=count;
            }
        }
        return mini;

    }
};