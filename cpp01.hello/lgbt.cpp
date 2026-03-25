#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text = "Hello, World!";
    
    // Вектор з кодами кольорів ANSI (червоний, жовтий, зелений, синій, маджента, ціан)
    std::vector<std::string> colors = {
        "\033[31m", "\033[33m", "\033[32m", "\033[34m", "\033[35m", "\033[36m"
    };

    for (size_t i = 0; i < text.length(); ++i) {
        // Виводимо символ з відповідним кольором (використовуємо залишок від ділення)
        std::cout << colors[i % colors.size()] << text[i];
    }

    // Скидаємо колір до стандартного в кінці
    std::cout << "\033[0m" << std::endl;

    return 0;
}
