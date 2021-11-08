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
    auto const i=pytanie("Podaj Rok: ");
    auto const x=pytanie("Podaj miesiac: ");
	if(i%4==0){              // rok przestepny co 4 lata
		if(x=2){
	std::cout<<"Luty ma 29 dni"
}
		if(i%100==0){   // rok przestepny co 100 lat
	if(i%400==0){          // rok przestepny co 400 lat
		}
	}
	else(
}
