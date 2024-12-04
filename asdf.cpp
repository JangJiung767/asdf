#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    std::string password;
    std::srand(std::time(0));

    for (int i = 0; i < length; ++i) {
        password += characters[std::rand() % characters.size()];
    }

    return password;
}

int main() {
    int length;
    std::cout << "Enter the desired password length: ";
    std::cin >> length;

    std::string password = generatePassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}