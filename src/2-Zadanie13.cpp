#include <iostream>
#include <string>
auto pytanie(std ::string const prompt) -> int
{
    if (not prompt.empty()) {
        std ::cout << prompt;
    }
    auto value = std ::string{};
    std ::getline(std ::cin, value);
    return std ::stoi(value);
}
auto main() -> int
{
        auto const a=pytanie("podaj dlugosc : ");
        int i=1;
        while(i<=a)
        {
        for(int y=a;y>=i;y--)
        {
        std::cout<<"*";
        }
        std::cout<<"\n";
        i++;
        }
return 0;
}


