class Solution {
public:
    int punishmentNumber(int n) {
        int sum=0;
        for(int i=0;i<=n;i++){
            int squ = i*i;
            if(canPartition(squ,i)){
                sum += squ;
            }
        }
        return sum;

    }
    bool canPartition(int num,int target){
        if(num < target || target < 0)
          return false;

        if(num == target)
          return true;

        return (canPartition(num/10,target-(num%10)) || canPartition(num/100,target-(num%100)) || canPartition(num/1000,target-(num%1000)));
    }

};