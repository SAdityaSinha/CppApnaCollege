#include <iostream>

int main(){
    // for(int date=1;date<=30;date++){
    //     if(date%2==0){
    //         continue;
    //     }
    //     std::cout<<"Go Out\n";
    // }

    // for(int i =0;i<=300;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     std::cout<<"value"<<i<<"\n";
    // }

    
    for(int i=1;i<=100;i++){
        bool flag = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(!flag){
            continue;
        }
        std::cout<<"prime number"<<i<<std::endl;

    }
}