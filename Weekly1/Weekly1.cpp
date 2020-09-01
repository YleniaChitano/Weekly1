#include <iostream>
#include <string>

std::string name = "";
char initial;
int age;
long phone;
std::string birth = "";

int main()
{
    std::cout << "What is your full name? ";
    std::getline(std::cin, name);

    std::cout << "What is the initial of your first name? ";
    std::cin >> initial;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What is your phone number? ";
    std::cin >> phone;

    std::cout << "Please enter your date of birth (dd/mm/yyyy) ";
    std::cin >> birth;

    std::cout << "---------------------------\n";
    std::cout << "| Name     |" << name << "\n";
    std::cout << "| Initial  |" << initial << "\n";
    std::cout << "| Age      |" << age << "\n";
    std::cout << "| Phone num|" << phone << "\n";
    std::cout << "| Birthday |" << birth << "\n";
    std::cout << "---------------------------\n";


    return 0;
}

