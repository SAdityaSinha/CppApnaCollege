#include <iostream>

int main(){
    int num1,num2;
    std::cout<<" enter 2 numbers :\n";
    std::cin>>num1>>num2;

    char op;
    std::cout<<"chose + - * / \n";
    std::cin>>op;

    switch (op)
    {
    case '+':
        std::cout<<num1+num2;
        break;
    case '-':
        std::cout<<num1-num2;
        break;
    case '*':
        std::cout<<num1*num2;
        break;
    case '/':
        std::cout<<num1/num2;
        break;

    default:
        break;
    }
}