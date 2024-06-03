#include <iostream>

int SumFirstN(int n)
{
    int sum = 0;
    for(int i=1; i <= n; i++)
    {
        sum += i;
    }

    return sum;

}

int SumRecur(int n)
{
    if(n > 0){
        return n + SumRecur(n-1);
    }else{
        return n;
    }
}

int main()
{
    int n =23;
    std::cout<<"geting the sum without recurr \n";
    std::cout<<SumFirstN(n)<<"\n";

    std::cout<<"getting with recur\n";
    std::cout<<SumRecur(n)<<"\n";
    
}