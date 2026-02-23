#include <iostream>

using namespace std;

int main() {
    while(true) {

    bool operation_valid=true;
    string op;
    char symbol;
    float b, a, result;

    cout<<"do you want to continue? Y/N"<<endl;
    cin>>op;

    if(op=="N") {
        return 0;
    } 
    else if (op!="Y")
    {
        cout<<"wrong option!"<<endl;
        operation_valid = false;
        continue;
    }

    cout<<"enter the first number: "<<endl;
    cin>>a;
    cout<<"enter the second number: "<<endl;
    cin>>b;

    cout<<"choose a mathematical operation: "<<endl;
    cout<<"*,/,+,-,%"<<endl;
    cin>>symbol;

    if(symbol=='%' && a!=(int)a || b!=(int)b) {
        cout<<"numbers has fractional part"<<endl;
        continue;
    }


    int ai, bi;

    // mathematical operations 
        switch (symbol)
        {
        case '*':
            result = a*b;
            break;
        case '/': {

            if(b==0) {
                cout<<"you can't divide by 0"<<endl;
                operation_valid = false;
                break;
            }
            result = a/b;
            break;
        }


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
    
    // prints result if operation_valid equals true
    if(operation_valid) {
    cout<<"the result is: "<<result<<endl;
    continue;
    }
    break;
    }
}
