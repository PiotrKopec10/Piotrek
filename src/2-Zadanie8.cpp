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
int suma;
auto main() -> int
{
                auto const a= pytanie("Podaj liczbe do silni : ");
		suma=1;
        for ( int i = 1;i<=a;i++ )
        {
                        suma=i*suma;
        }

	std::cout<<"Silnia wynosi: "<< suma;

      return 0;
}

