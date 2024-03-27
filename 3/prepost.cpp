#include <iostream>

int main(){
    // check with pre

    std::cout<<"using for loop \nchecking with post \n";
    for(int i=0;i<5;i++){
        std::cout<<" "<<i;

    }
    std::cout<<"\n\n";
    std::cout<<"checking with pre \n";
    for(int i=0;i<5;++i){
        std::cout<<" "<<i;

    }

    int i =0;
    std::cout<<"\nthis time using while loop \nchecking with pre \n";
    while(i<5){
        std::cout<<" "<<++i;
    }
    i= 0;
    std::cout<<"\n\nchecking with post \n";
    while(i<5){
        std::cout<<" "<<i++;
    }
    
}