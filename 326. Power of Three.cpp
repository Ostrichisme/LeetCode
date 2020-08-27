class Solution {
public:
    bool isPowerOfThree(int n) {
        //3^19=1162261467且只有3的次方數可以整除它
       return n>0&&1162261467%n==0;
    }
};
