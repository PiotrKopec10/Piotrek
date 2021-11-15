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
	int luty;
auto main() -> int
{
    auto const i=pytanie("Podaj Rok: ");
    auto const x=pytanie("Podaj miesiac: ");
		if((i % 4==0 && i %100 !=0) || (i %400 == 0))
		{
		 luty=29;
		}
		else
		{
		luty=28;
		}

	 switch(x)
	{
	       	case 1:
		std::cout<<"Styczen "<< i <<" roku ma 31 dni "<<"\n";
		break;
		 case 2:
                std::cout<<"Luty "<< i <<" roku ma "<<luty<< " dni"<<"\n";
                break;
		 case 3:
                std::cout<<"Marzec "<< i <<" roku ma 31 dni"<<"\n";
                break;
		 case 4:
                std::cout<<"Kwiecien "<< i <<" roku ma 30 dni"<<"\n";
                break;
		 case 5:
                std::cout<<"Maj "<< i <<" roku ma 31 dni"<<"\n";
                break;
		 case 6:
                std::cout<<"Czerwiec "<< i <<" roku ma 30 dni"<<"\n";
                break;
		 case 7:
                std::cout<<"Lipiec "<< i <<" roku  ma 31 dni"<<"\n";
                break;
		 case 8:
                std::cout<<"Sierpien "<< i <<" roku ma 31 dni"<<"\n";
                break;
		 case 9:
                std::cout<<"Wrzesien "<< i <<" roku ma 30 dni"<<"\n";
                break;
		 case 10:
                std::cout<<"Pazdziernik "<< i <<" roku ma 31 dni"<<"\n";
                break;
		 case 11:
                std::cout<<"Listopad "<< i <<" roku  ma 30 dni"<<"\n";
                break;
		 case 12:
                std::cout<<"Grudzien "<< i <<" roku ma 31 dni"<<"\n";
                break;
	}

	return 0;
}
