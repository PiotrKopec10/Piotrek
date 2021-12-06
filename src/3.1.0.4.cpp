#include <iostream>
#include <string>
#include <array>
#include <algorithm>



auto amin(int a[], int n) -> int
{
    int low;
    std::sort(a,a+10);
    low = a[0];
    std::cout << "Najmniejsza wartosc to   " << low;

    return low;
}

auto main() -> int
{
	int tab[10] { 42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12 };
    amin(tab,1);


return 0;
}


