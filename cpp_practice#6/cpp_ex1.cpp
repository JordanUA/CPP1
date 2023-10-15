#include <iostream>

int main() {
    int N, originalN, lastDigit, firstDigit, reversedN = 0, multiplier = 1;
    std::cout << "Введіть натуральне число N: ";
    std::cin >> N;
    originalN = N;
    lastDigit = N % 10;
    while (N >= 10) {
        N /= 10;
    }
    firstDigit = N;
    reversedN = lastDigit * multiplier + originalN % multiplier / 10;
    reversedN = reversedN * 10 + firstDigit;
    std::cout << "Число після обміну першої та останньої цифри: " << reversedN << std::endl;
    return 0;
}
