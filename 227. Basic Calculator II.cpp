class Solution {
public:
    int calculate(string s) {
        stack<int> num;
        int temp=0;
        char op='+';
        //op用來記上一個operator，初始化為'+'，遇到'+'或'-'就將數字放到stack內，遇到'*'或'/'則優先處理再放進stack
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
