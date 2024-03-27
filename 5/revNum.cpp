#include <iostream>

int main() 
{ 
    int n,temp;
    std::cin>>n;

    int rev=0;
    while(n>0)
    {
        temp=n%10;
        rev *=10;
        rev += temp;
        
        n= n/10;

    }
    std::cout<<rev<<"\n";
}