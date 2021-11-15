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
int szerokosc;
auto main() -> int
{
    auto const a = pytanie("podaj wysokosc: ");
	for(szerokosc = 0; szerokosc < a*2-3; szerokosc ++)
		{
		std::cout<<"*";
		}
		std::cout<<"\n";
	for(int i=0; i< a - 2; i++)
		{
			for(int z=0; z<a - 2 - i; z++)
				{
					std::cout<<"*";
				}
			for(int k=0; k<i*2+1 ;k++)
				{
					std::cout<<" ";
				}
			for(int z=0; z<a - 2 -i;z++)
				{
					std::cout<<"*";
				}
				std::cout <<"\n";
		}

			for(szerokosc = 0; szerokosc< a*2-3; szerokosc ++)
			{
				std::cout<<"*";
			}

    return 0;
}

