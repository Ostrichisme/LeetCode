class Solution {
public:
    int hammingWeight(uint32_t n) {
    int count=0;
        for(int i=31;i>=0;i--){
            //往右位移i個bit並跟1做AND運算，看該digit是1or0
            int digit=(n>>i)&1;
            if(digit==1)
                count++;
        }
        return count;

    }
};
