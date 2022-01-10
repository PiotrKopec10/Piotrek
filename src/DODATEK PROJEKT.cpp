#include <iostream>
#include <vector>

void mnozenie()
{
    int j;
    float a,b,c;
    std::cout<<"Podaj ile liczb chcesz pomnozyc: ";
    std::cin>>a;
    std::vector<float> iloczyn;

    for(int i=0; a>i; i++ )
    {
        std::cout<<"Podaj wartosc: ";
        std::cin>>b;
        iloczyn.push_back(b);
    }
    iloczyn[a]=1;
    for(j=0; j<a-1 ; j++ )
    {

       // iloczyn[j]*= iloczyn[j]*iloczyn[j+1] ;
        //std::cout<<iloczyn[j];

        c*=iloczyn[j];
    }

        std::cout<<c;


}

void dzielenie()
{
    int j;
    float a,b,c;
    std::cout<<"Podaj liczbe ktora chcesz podzielic: ";
    std::cin>>a;
    float dzielenie[200];
    std::cout<<"Podaj liczbe dzielnikow: ";
    std::cin>>b;
    for(int i=0; i<b; i++)
    {
        std::cout<<"Podaj dzielnik: ";
        std::cin>>dzielenie[i];
    }
     for(int i=0; i<b; i++)
    {
      a= a/dzielenie[i];
    }
    std::cout<<a;
}
auto main()-> int
{

    mnozenie();

}
