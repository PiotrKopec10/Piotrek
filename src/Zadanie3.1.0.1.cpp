
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

	auto init(int a[], int n)->void
	{
		for(auto i=0; i <= n; i++){
			a[i] = 0;
		} 
	}

 auto main() ->int
{
	int n = zapytaj("Ile potrzebujesz liczb: ");
	int a[9990];
	int i= 1;
	init(a, n);
	while(i <= n)
	{
	std::cout<< a[i];
	i++;
	}
return 0;
}
