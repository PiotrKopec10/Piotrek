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
	auto const b=pytanie("podaj szerokosc : ");
	for(int y=0;y<a;y++)
	{
			for(int x=0;x<b;x++)
			{
				std::cout<<"*";
			}
		std::cout<<"\n";
	}
return 0;
}
