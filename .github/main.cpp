#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double input1, input2;
    char inputOperator;
    bool done = false;
    
    while (!done) {
        cout << "First Number: ";
        cin >> input1;
        cout << "Operator(+,-,*,/,^, q = quit): ";
        cin >> inputOperator;
        if (inputOperator == 'q'){
            done = true;
            break;
        }
        cout << "Second Number: ";
        cin >> input2;
        switch(inputOperator){
            case '+':
                cout << input1 + input2 << endl;
                break;
            case '-':
                cout << input1 - input2 << endl;
                break;
            case '*':
                cout << input1 * input2 << endl;
                break;
            case '/':
                cout << input1 / input2 << endl;
                break;
            case '^':
                cout << pow(input1,input2) << endl;
                break;
            default:
            cout << "Bad Input" << endl;
            break;
        }

    }

    return 0;
}