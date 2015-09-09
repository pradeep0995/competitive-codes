/* Evaluation of postfix expressions
allowed operators are +, - , / ,*
operands must be integers and separated by comma
IMPORTANT NOTE:OF THE TWO POPPED THE BOTTOM ONE IS OP1 AND UPPER ONE IS OP2
*/
#include<iostream>
#include<stack>
#include<string>

using namespace std ;

// function to evaluate postfix expression
int postfix(string exp);

// function to perform operation and return value
int operation(char oper,int op1,int op2);

// function to verify if a character is operator or not
bool isoperator(char c);

//function to check if a char is a numeric character
bool isnumeric(char c);

int main()
{
    string exp;
    cout<<"Enter the postfix expression\n";
    getline(cin,exp);
    int result=postfix(exp);
    cout<<result;
    return 0;
}

int postfix(string exp)
{
    stack<int> s;

    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]==' ' || exp[i]==',')continue;
        else if(isoperator(exp[i]))
        {
            //pop two operands
            int op2=s.top();s.pop();
            int op1=s.top();s.pop();

            //perform operation
            int out=operation(exp[i],op1,op2);
            //push the result on stack
            s.push(out);
        }
        else if(isnumeric(exp[i]))
        {
            int operand=0;
            while(i<exp.length() && isnumeric(exp[i]))
                  {
                      operand = operand*10+(exp[i]-'0');
                      i++;
                  }
            i--;
            s.push(operand);
        }
    }
    return s.top();
}
int operation(char c,int op1,int op2)
{
    if(c=='+')return (op1+op2);
    else if(c=='/') return(op1/op2);
    else if(c=='*') return op1*op2;
    else if(c=='-') return op1-op2;
    else {
        cout<<"operator not available";
        return -1254;
    }
}
bool isoperator(char c)
{
    if(c=='+'|| c=='-'|| c=='*'|| c=='/') return true;
    else return false;
}

bool isnumeric(char c)
{
    if(c>='0' && c<='9')return true;
    else return false;
}




