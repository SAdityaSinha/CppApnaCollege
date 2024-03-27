#include <iostream>

int main(){
    char button;
    std::cout<<"Enter yor choice ";
    std::cin>>button;

    switch (button)
    {
    case 'a':
        std::cout<<"you chossed for a \n";
        break;
    
    default:
        std::cout<<"choose a\n";
        break;
    }
}