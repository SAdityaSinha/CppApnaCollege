#include <iostream>

int main(){
    std::cout<<"Enter 3 num one after another::\n";
    int a,b,c;
    std::cin>>a>>b>>c;

    // to check the greatest 
    if(a>b){
        if(a>c){
            std::cout<<"a is greatest \n";
        }else{
            std::cout<<"c is greatest \n";
        }

    }else
    {
       if(b>c){
        std::cout<<"b is greatest \n";

       }else{
        std::cout<<"c is greatest \n";
       } 
    }
    
}