#include "Fraction.h"

int main() {
    try {
        Fraction a(1, 2), b(3, 4);
        Fraction sum = a + b;
        Fraction diff = a - b;
        Fraction prod = a * b;
        Fraction quot = a / b;

        std::cout << "Сума: ";
        sum.display();
        std::cout << "Різниця: ";
        diff.display();
        std::cout << "Добуток: ";
        prod.display();
        std::cout << "Частка: ";
        quot.display();
    } catch (const std::exception &e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
