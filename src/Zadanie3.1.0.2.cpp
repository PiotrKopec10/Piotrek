
#include <iostream>
#include <string>
auto zapytaj (std ::string const prompt) -> int
{
    if (not prompt.empty()) {
        std ::cout << prompt;
    }
    auto value = std ::string{};
    std ::getline(std ::cin, value);
    return std ::stoi(value);
}

       auto iota(int a[], int n, int start) -> void
        {
                for(auto i=0; i <= n; i++){
                        a[i] = start++;
                } 
        }

 auto main() ->int
{
        int n = zapytaj("Ile potrzebujesz liczb: ");
	auto const start = zapytaj("Podaj liczbe startowa: ");
        int a[9990];
        int i= 0;
        iota(a, n, start);
        while(i < n)
        {
        std::cout<< a[i];
        i++;
        }
return 0;
}

