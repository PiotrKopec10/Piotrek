#include <iostream>
#include <string>
auto zapytaj(std::string) -> int;
int pierfsza(int a);





auto main() -> int
{
int c=0;
int a = zapytaj(" a= ");
for (int i=2; a>=i; i++)
{
if(pierfsza(i)>0)
c+=i;
}
std::cout <<" suma: "<<a<<" to: " <<c << "\n";
    return 0;
}
int pierfsza(int a)
{
    int i;
    bool pierwsza = true;
    if (a == 0 || a == 1) {
        pierwsza = false;
    } else {
        for (i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                pierwsza = false;
                break;
            }
        }
    }
    if (pierwsza)
        return a;
    else
        return 0;
}

auto zapytaj(std::string prompt) -> int
{
    std::cout << prompt << " int: ";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
