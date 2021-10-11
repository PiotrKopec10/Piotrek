#include <iostream>
#include <string>
auto relacje ( std :: string const prompt ) -> int
{
if ( not prompt . empty ()) {
std :: cout << prompt ;
}
auto value = std :: string {};
std :: getline ( std :: cin , value );
return std :: stoi ( value );
}
auto main() ->int
{
        auto const a=relacje("a=");
        auto const b=relacje("b=");
        if(a==b)
        {
                std::cout<<a<<"==" <<b<< "\n";
        }
        else if(a>b)
        {
                std::cout<<a<< ">" <<b<< "\n";
        }
        else
        {
                std::cout<<a<< "<" <<b<< "\n";
        }
        return 0;
}


