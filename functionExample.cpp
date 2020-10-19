#include <iostream>
void sayHello() {
    std::cout << "Hello World!\n";
}
void name_x_times(std::string name, int x) {
    while (x > 0) {
        std::cout << name << "\n";
        x--;
    }
}
int main() {
    sayHello();
    std::string nameGiven;
    int number_of_times;
    std::cout << "What is your name?\n";
    std::cin >> nameGiven;
    std::cout << "How many times would you like it repeated?\n";
    std::cin >> number_of_times;
    name_x_times(nameGiven,number_of_times);
}