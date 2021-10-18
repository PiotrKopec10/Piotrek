#include < iostream >
#include < string >
auto pytanie(std ::string const prompt) -> int
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
    auto const a = pytanie("Podaj a:");
    auto const b = pytanie("Podaj b:");
    auto const c = pytanie("Podaj c:");
}
