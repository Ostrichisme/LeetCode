class Solution {
public:
    int calculate(string s) {
        stack<int> num;
        int temp=0;
        char op='+';
        //op�ΨӰO�W�@��operator�A��l�Ƭ�'+'�A�J��'+'��'-'�N�N�Ʀr���stack���A�J��'*'��'/'�h�u���B�z�A��istack
        for(int i=0;i<=s.length();i++){
            if(isdigit(s[i]))
                temp=temp*10+(s[i]-48);
            else if(s[i]==' ')
                continue;
            else{
                switch(op){
                    case '+':
                        num.push(temp);
                        break;
                    case '-':
                        num.push(-temp);
                        break;
                    case '*':
                        temp=num.top()*temp;
                        num.pop();
                        num.push(temp);
                        break;
                     case '/':
                        temp=num.top()/temp;
                        num.pop();
                        num.push(temp);
                        break;

                }
                op=s[i];
                temp=0;
            }

        }
        int ans=0;
        while(!num.empty()){
           ans+=num.top();
            num.pop();
        }
        return ans;
    }
};
