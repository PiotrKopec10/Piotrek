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
    std::cout << (a + b);
}
