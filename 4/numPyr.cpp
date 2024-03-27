#include <iostream>

int main(){
    int n;
    std::cout<<"Enter a num :";
    std::cin>>n;

    for(int i =1; i<=n; i++){
        for(int j=0;j<i;j++){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }

    std::cout<<"\n\n";

    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            std::cout<<num++<<" ";
        }
        std::cout<<"\n";
    }
}