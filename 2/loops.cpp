#include <iostream>

int main(){
    // for loop
    int sum =0;
    for(int i =0;i<10;i++){
        sum +=i;
    }
    std::cout<<"sum = "<<sum<<"\n";

    // while loop

    // take only positiev numbers 
    int num;
    std::cout<<"enter number:\n";
    std::cin>>num;
    while (num>0)
    {
        std::cout<<num<<"\n";
        std::cin>>num;
    }
    

    // do while loop 

    std::cout<<"Enter another num: \n";
    int num2;
    std::cin>>num2;
    do{
        std::cout<<num2<<"\n";
        std::cin>>num2;
    }while(num2>0);
}