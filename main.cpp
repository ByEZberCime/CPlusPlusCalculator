#include <format>
#include <iostream>

int main() {

    std::cout << "Calculator has been activated" << std::endl << "Write command 'plus,minus,multiply,divid" <<std::endl;

    while (true) {
        std::string command;
        std::cin >> command;

        if (command == "plus") {

            std::cout << "Write two more input!" << std::endl;
            auto x = 0, y = 0;
            std::cin >> x >> y;

            std::cout << x << " + " << y << " = " << x+y << std::endl;

        } else if (command == "minus") {

            std::cout << "Write two more input!" << std::endl;
            auto x = 0, y = 0;
            std::cin >> x >> y;

            std::cout << x << " - " << y << " = " << x-y << std::endl;

        } else if (command == "multiply") {

            std::cout << "Write two more input!" << std::endl;
            auto x = 0, y = 0;
            std::cin >> x >> y;

            std::cout << x << " x " << y << " = " << x*y << std::endl;

        } else if (command == "divid") {

            std::cout << "Write two more input!" << std::endl;
            auto x = 0, y = 0;
            std::cin >> x >> y;

            std::cout << x << " : " << y << " = " << x/y << std::endl;

        } else if (command == "exit") {
            std::cout << "The program is exit!" << std::endl;
            break;
        }
    }
    return 0;
}