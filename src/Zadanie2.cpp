#include <iostream>
#include <string>
auto mnozenie(std ::string const prompt) -> int
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
    auto const a = mnozenie("a=");
    auto const b = mnozenie("b=");
    std::cout << (a * b);
}
