#include <iostream>

auto square(int x) -> int { return x * x; }

int main() {
    auto number{7};
    auto result = square(number);

    std::cout << "Число: " << number << std::endl;
    std::cout << "Квадрат: " << result << std::endl;

    return 0;
}