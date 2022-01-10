#include <iostream>
auto is_divisible(int a, int b) -> bool
{
    if(a%b==0)
        return true;
    else
        return false;
}
auto is_even(int a) -> bool
{
    if(is_divisible(a,2)==1)
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    std::cout<<"Podaj liczbe: ";
    std::cin>>a;
    std::cout<< is_even(a) <<"\n";
}
