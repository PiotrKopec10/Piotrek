#include <iostream>
#include <string>
auto dodawanie(std ::string const prompt) -> int
{
    if (not prompt.empty()) {
        std ::cout << prompt;
    }
    auto value = std ::string{};
    std ::getline(std ::cin, value);
    return std ::stoi(value);
}
auto main() -> int
{
    auto const a = dodawanie("a=");
    auto const b = dodawanie("b=");
    if (a > b) {
        std::cout << a << "\n";
    } else if (a < b) {
        std::cout << b << "\n";
    } else {
        std::cout << "Sa rowne"
                  << "\n";
    }
    return 0;
}
