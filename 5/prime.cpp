#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin>>n;
    
    int i=0;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
        {
            break;
        }
    }
    
    if(i>sqrt(n))
    {
        std::cout<<"prime \n";
    }
    else{
        std::cout<<"non-prime \n";
    }
}