#include <iostream>
#include <string>

auto count_chars(std::string wyraz, char znak) -> int{
    int d = 0;
    for(int i=0; i<wyraz.size() ; i++)
    {
        if(wyraz[i]==znak)
            d++;
    }
    return d;
}


auto main() -> int
{
    std::cout << count_chars("Araakakakakakak",'a');

    return 0;
}


