#include <iostream>

auto amax(int a[], int n) -> int
{

    int max = a[0];
    for(int i = 1;i < n; ++i){
       if(max < a[i])
           max = a[i];
    }


    std::cout << "Najwieksza wartosc to  " << max;

    return max;
}


auto main() -> int
{

	int tab[10] { 42 , 9 , -1 , 18 , 59, 3, 101 , 31 , 72 , 12,} ;
    amax(tab,10);
return 0;
}
