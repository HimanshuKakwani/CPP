#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout << "Enter first number: ";
    cin>> a;

    cout<< "Enter second number: ";
    cin>> b;

    char op;
    cout<< "Enter operation to be performed: ";
    cin>> op;

    switch (op)
    {
    case '+':
        
        cout<< "Addition of two numbers is: " <<(a+b);
        break;
    case '-':
        
        cout<< "Difference of two numbers is: " <<(a-b);
        break;
    case '*':
        
        cout<< "Product of two numbers is: " <<(a*b);
        break;
    case '/':
        
        cout<< "Quotient of two numbers is: " <<(a/b);
        break;

    default: cout<<"Not a basic operation";
        break;
    }


}