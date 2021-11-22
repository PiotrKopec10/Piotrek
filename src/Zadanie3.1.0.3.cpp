#include <iostream>
#include <string>
#include <array>
auto zapytaj (std ::string const prompt) -> int
{
    if (not prompt.empty()) {
        std ::cout << prompt;
    }
    auto value = std ::string{};
    std ::getline(std ::cin, value);
    return std ::stoi(value);
}

      auto asum(std::array<int,10>a, int n) -> int
        {
		int  d=0;
                for(auto i=0; i < n; i++){
                        d=d+a[i];
                } 
	return d;
        }

 auto main() ->int
{
        auto const n = zapytaj("Podaj ile mamy miec liczb: ");
        std::array<int, 10> a={42 , 9, -1, 18, 59, 3, 101, 31, 72, 12};
        std::cout<<"Suma: "<< asum(a, n)<<"\n";
return 0;
}


