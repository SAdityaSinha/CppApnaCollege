// intering if else

#include <iostream>

int main(){
    int money;
    std::cout<<"Enter your money  ";
    std::cin>>money;

    if(money>5000){
        std::cout<<"ok\n";
        if(money>10000){
            std::cout<<"Shopint \n";
        }else{
            std::cout<<"movie \n";
        }

    }else if(money>2000){
        std::cout<<"try\n";

    }else{
        std::cout<<"thank you\n";
    }
    
}