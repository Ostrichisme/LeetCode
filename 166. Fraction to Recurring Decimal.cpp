class Solution {
public:
    string fractionToDecimal(int numerator , int denominator) {
        if(numerator==0||denominator==0)
            return "0";
        string s;
       if((numerator <0)^(denominator<0))
           s="-";
        long num=abs(numerator);
        long den=abs(denominator);
        s+=to_string(num/den);
        num%=den;
        if(num==0)
            return s;

        else {
             s+=".";
            int pos=s.size();
            //key代表被除數，value代表該被除數第一次出現的位置
            unordered_map<int,int> m;;
            while(num){
                //計算被除數有沒有重複出現
                if(m.find(num)!=m.end()) {
                    s.insert(m[num],"(");
                    s+=")";
                    break;
                }
                else{
                    m[num]=pos;
                    pos++;
                    num*=10;
                    s+=to_string(num/den);
                    num%=den;
                }

            }
            return s;

        }



    }
};
