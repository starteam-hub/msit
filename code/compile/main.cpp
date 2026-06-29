#include <iostream>
#include <thread>
#include <chrono>
#include <clocale>

void clear() {
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    // Define Encoding to UTF-8
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // Play the Loop
    while (true) {
        // Define Sleep Config.
        using namespace std::chrono_literals;
        clear();
        std::string option;
        std::cout << "MSit\n";
        std::cout << "1. Dar Oi";
        std::cout << "2. Sair\n";
        std::cout << "Selecione: ";
        std::cin >> option;
        if (option == "1") {
            std::cout << "Oi!!!!";
        else if (option == "2") {
            return 0;
        }
        // Option Invalid Alert
        else {
            clear();
            std::cout << "Opção invalida!\n";
            std::this_thread::sleep_for(2s);
        }
    }
    return 0;
}
