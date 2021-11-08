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
    auto const i=pytanie("Podaj numer dnia tygodnia: ");
    switch(i){
	case 1:
	std::cout<<"Poniedzialek"<<"\n";
	break;
	case 2:
	std::cout<<"Wtorek"<<"\n";
	break;
	case 3:
	std::cout<<"Sroda"<<"\n";
	break;
	case 4:
	std::cout<<"Czwartek"<<"\n";
	break;
	case 5:
	std::cout<<"Piatek"<<"\n";
	break;
	case 6:
	std::cout<<"Sobota"<<"\n";
	break;
	case 7:
	std::cout<<"Niedziela"<<"\n";
	break;
	default:
	std::cout<<"NIE MA TAKIEGO DNIA :)"<<"\n";
	break;
 return 0;
 }
}


