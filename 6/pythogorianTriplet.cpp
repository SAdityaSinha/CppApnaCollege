#include <iostream>

char checkGreatest(int a, int b, int c)
{
    if(a>=b && a>=c)
    {
        return 'a';
    }else if (b >= a && b>= c)
    {
        return 'b';
    }else{
        return 'c';
    }
}

bool checkPythagorian(int grt, int x, int y)
{
    if (grt*grt == x*x + y*y)
    {
        return true;
    }
    return false;
}

int main()
{
    int a = 5;
    int b = 3;
    int c = 2;
    bool not_triplet = false;

    switch (checkGreatest(a,b,c))
    {
    case 'a':
        if(checkPythagorian(a,b,c))
            std::cout<<" is a triplet"<<"\n";
        else
            not_triplet = true;
        break;
    case 'b':
        if(checkPythagorian(b,a,c))
            std::cout<<" is a triplet"<<"\n";
        else
            not_triplet = true;
        break;
    case 'c':
        if(checkPythagorian(c,b,a))
            std::cout<<" is a triplet"<<"\n";
        else
            not_triplet = true;
        break;
    }

    if(not_triplet)
    {
        std::cout<<"is not a triplet \n";
    }
}

