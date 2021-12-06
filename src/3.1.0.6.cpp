#include <iostream>
#include <string>

auto pytanie (std::string const prompt) -> int
{
if (not prompt.empty()) {
std::cout << prompt ;
}
auto value = std::string {};
std::getline (std::cin , value);
return std::stoi (value);
}

auto search(int a[], int n, int needle) -> int
{
    for(int i=0;i<n;i++){
        if(needle == a[i]){
            std::cout << "Indeks liczby " << i;
            return i;
        }
        }
        std::cout << "Nie ma takiej liczby, ktorej poszukujesz ";
        return -1;
    }



int c = 0;

auto main() -> int
{
	int tab[10] { 42 , 9 , -1 , 18 ,3 , 59 , 101 , 31 , 72 , 12 };

    auto const c = pytanie ("Podaj szukana liczbe: ");


    int x = search(tab,10,c);


return 0;
}
