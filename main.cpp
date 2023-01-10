#include <iostream>
#include <string>

int main() {

    for (int x = 100; x < 500; x++) {
        for (int y = 100; y < 1000 - x; y++) {
            int sum = x + y;
            std::string total = std::to_string(x) + std::to_string(y) + std::to_string(sum);

            bool print_this = true;
            for (int i = 0; i < total.length(); i++) {
                
                if (total[i] == '0') {
                    print_this = false;
                    break;
                }
                
                for (int j = i + 1; j < total.length(); j++) {
                    if (total[i] == total[j]) {
                        print_this = false;
                        break;
                    }                    
                }

                if (!print_this) {
                    break;
                }                
            }

            if (print_this) {
                std::cout << total.substr(0, 3) + " " + total.substr(3, 3) + " " + total.substr(6, 3) << std::endl;
            }
        }
    }

    std::cout << "Hello World!" << std::endl;

    return 0;
}
