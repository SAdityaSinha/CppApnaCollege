#include <iostream>

int main(){
    int n;
    std::cout<<"Enter a number :";
    std::cin>>n;

    for(int i=0;i<n;i++){
        for(int j =0;j<n-i;j++){
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }

    std::cout<<"\n\n";

    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            std::cout<<"   ";
        }
        for(int j=0; j< n-i+1;j++){
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
}

