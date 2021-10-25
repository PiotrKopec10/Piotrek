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
int suma,i=0;
auto main() -> int
{
                auto const a= pytanie("Podaj liczbe do silni : ");
                suma=1;
        while ( i<a )
        {
			i++;
                        suma=i*suma;
        }

        std::cout<<"Silnia wynosi: "<< suma;

      return 0;
}


