#include <iostream>

int main(){
    int row,col;
    std::cout<<"enter row :";
    std::cin>>row;
    std::cout<<"enter col:";
    std::cin>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }  

    std::cout<<"\n\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || i==row-1 || j==0 || j==col-1){
                std::cout<<" * ";
            }else{
                std::cout<<"   ";
            }
        }
        std::cout<<"\n";
    }
}