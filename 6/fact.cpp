#include <iostream>
#include <string>
// using namespace std;

std::string rev(std::string st)
{   
    std::string rev_st;
    int len = st.size();
    
    for(int i=0;i<len;i++){
        rev_st[i] = st[len-i-1];
    }
    std::cout<<rev_st<<"\n";
    return rev_st;
}



int main() {
	// Complete the program
    // two strings (a,b)
    // 1st cout<<len(a)+len(b)
    // 2nd cout<< a + b
    // 3rd cout<< a' << <<b' 
    
    
    
    
    // taking input
    std::string a,b;
    std::cin>>a>>b;
    
    std::string rev_a = rev(a);
    std::string rev_b = rev(b);
    
    // out
    std::cout<<a.size()+b.size()<<"\n";
    std::cout<<a+b<<"\n";
    std::cout<<rev_a<<" "<<rev_b<<"\n";
    
    
    return 0;
}