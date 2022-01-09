#include <iostream>
#include <string>
using namespace std;

auto main() -> int
{
    std::string imie;
    std::string imie1;
    std::cout<<"Podaj pierwsze imie: "<<"\n";
    std::cin>> imie;
    std::cout<<"Podaj drugie imie: "<<"\n";
    std::cin>> imie1;
    if(imie.size() > imie1.size()){
        std::cout<<"!";
    }
    else if(imie.size() < imie1.size()){
        std::cout<<"...";
    }
    else{
        std::cout<<".";
    }


}
