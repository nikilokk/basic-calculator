#include <iostream>

using namespace std;

int main() {
    float a,b;
    float result;
    char symbol;
    bool operation_valid=true;

    while(true) {
    cout<<"enter the first number or type 'q' to quit: "<<endl;
    cin>>a;
    cout<<"enter the second number: "<<endl;
    cin>>b;

    cout<<"choose a mathematical operation: "<<endl;
    cout<<"*,/,+,-,%";
    cin>>symbol;


    int ai, bi;

    switch (symbol)
    {
    case '*':
        result = a*b;
        break;
    case '/': {
        ai = (int)a;
        bi = (int)b;

        if(bi==0) {
            cout<<"you can't divide by 0"<<endl;
            operation_valid = false;
            break;
        }
        result = ai/bi;
        break;
    } 
    break;


    case '-':
        result = a-b;
        break;
    case '+':
        result = a+b;
        break;
    case '%': {
        ai = (int)a;
        bi = (int)b;

        if(bi==0) {
            cout<<"you can't divide by 0"<<endl;
            operation_valid = false;
            break;
        }
        

        result = ai%bi;
        break;
    }
    break;
        
    
    default:
        operation_valid = false;
        cout<<"you have to choose one of the operators!"<<endl;
        break;
    }
    

    if(operation_valid) {
    cout<<"the result is: "<<result<<endl;
    continue;
    }
    break;
    }
}