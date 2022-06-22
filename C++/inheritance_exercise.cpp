#include<iostream>
using namespace std;

class scientificCalculator;

class simpleCalculator{
protected:
    int num1, num2;
public:
    char op_expr;
    void setNum(void);
    int getNum1(void);
    int getNum2(void);
    void operation(void);
    char getOperation(void);
    void cal_Code(void);
};

void simpleCalculator::setNum(){
    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
}

int simpleCalculator::getNum1(void){
    return num1;
}

int simpleCalculator::getNum2(void){
    return num2;
}

void simpleCalculator::operation(){
    cout<<"Enter operation to be performed: "<<endl;
    cin>>op_expr;
}

char simpleCalculator::getOperation(){
    return op_expr;
}

void simpleCalculator::cal_Code(){
    switch (op_expr)
    {
    case '+':
        cout<<"SUM is: "<<num1 + num2<<endl;
        break;
    case '-':
        cout<<"SUBTRACTION is: "<<num1 - num2<<endl;
        break;
    case '*':
        cout<<"MULTIPLICATION is: "<<num1 * num2<<endl;
        break;
    case '/':
        cout<<"DIVIDE is: "<<num1 / num2<<endl;
        break;
    
    default:
        cout<<"CALLING SCIENTIFIC CAL"<<endl;
        break;
    }
}

class scientificCalculator: public simpleCalculator{
public:
    void scal_Code(void);
};

void scientificCalculator::scal_Code(){
    switch (op_expr)
    {
    case '%':
        cout<<"MODULUS is: "<<getNum1()%getNum2()<<endl;
        break;
    
    default:
        cout<<"Operation not found!!!"<<endl;
        break;
    }
}

// class calculator: public simpleCalculator, public scientificCalculator{
//     void caluculate(){
//         if (op_expr == '+' || op_expr == '-' || op_expr == '*' || op_expr == '/')
//         {
//             cal_Code();
//         }
//         else{
//             scal_Code();
//         }
//     }
// }

int main(){
    scientificCalculator c;
    c.setNum();
    c.operation();
    if (c.op_expr == '+' || c.op_expr == '-' || c.op_expr == '*' || c.op_expr == '/')
    {
        c.cal_Code();
    }
    else{
        c.scal_Code();
    }
    
    cout<<"Calculator Exits!!!"<<endl;
    return 0;
}