class Solution {
public:
    bool isPowerOfThree(int n) {
        //3^19=1162261467�B�u��3������ƥi�H�㰣��
       return n>0&&1162261467%n==0;
    }
};
