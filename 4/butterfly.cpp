#include <iostream>

int main(){
    int n;
    std::cout<<"enter a number :";
    std::cin>>n;

    for(int i=1;i<=n*2+1;i++){
        for(int j=1;j<=n*2+1;j++){
            if(i==(n*2+1)/2 || i==j || j+i-1 == n*2 || j==1 || j==n*2+1)
            {
                std::cout<<" * ";
            }
            else{
                std::cout<<"   ";
            }
        }
        std::cout<<"\n";
    }
}