class Solution {
public:
stack <int> s;
int num1=0;
int num2=0;
    int evalRPN(vector<string>& tokens) {
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                s.push(stoi(tokens[i]));
            }else if(tokens[i]=="+"){
                num2=s.top();
                s.pop();
                num1=s.top();
                s.pop();
                s.push(num1+num2);
            }
            else if(tokens[i]=="-"){
                num2=s.top();
                s.pop();
                num1=s.top();
                s.pop();
                s.push(num1-num2);
            }
            else if(tokens[i]=="*"){
                num2=s.top();
                s.pop();
                num1=s.top();
                s.pop();
                s.push(num1*num2);
            }
            else if(tokens[i]=="/"){
                num2=s.top();
                s.pop();
                num1=s.top();
                s.pop();
                s.push(num1/num2);
            }
        }
        return s.top();
    }
};
